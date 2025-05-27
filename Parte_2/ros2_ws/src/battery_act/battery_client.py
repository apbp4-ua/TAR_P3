import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from battery_act.action import Battery
import sys

class BatteryClient(Node):
    def __init__(self):
        super().__init__('battery_client')
        self._client = ActionClient(self, Battery, 'battery_monitor')

    def send_goal(self, threshold):
        self._client.wait_for_server()
        goal_msg = Battery.Goal()
        goal_msg.target_percentage = int(threshold)

        self._send_goal_future = self._client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        self._goal_handle = future.result()
        if not self._goal_handle.accepted:
            self.get_logger().info('Goal rechazado.')
            return

        self.get_logger().info('Goal aceptado.')
        self._result_future = self._goal_handle.get_result_async()
        self._result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Feedback recibido: Batería = {feedback_msg.feedback.current_percentage}%')

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Resultado: {result.warning}')
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    if len(sys.argv) < 2:
        print("Uso: ros2 run battery_act battery_client <umbral_bateria>")
        return

    threshold = sys.argv[1]
    client = BatteryClient()
    client.send_goal(threshold)
    rclpy.spin(client)

if __name__ == '__main__':
    main()
