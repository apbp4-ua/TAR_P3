import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from battery_act.action import Battery
import time

class BatteryChargerServer(Node):
    def __init__(self):
        super().__init__('battery_charger')
        self._action_server = ActionServer(
            self,
            Battery,
            'battery_monitor',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )

    def goal_callback(self, goal_request):
        self.get_logger().info(f'Recibido nuevo goal: {goal_request.target_percentage}%')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Cancelación solicitada.')
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Ejecutando acción de batería...')
        battery_level = 100
        feedback_msg = Battery.Feedback()

        while battery_level > goal_handle.request.target_percentage:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Acción cancelada.')
                return Battery.Result(message='Descarga cancelada.')

            battery_level -= 5
            feedback_msg.current_percentage = battery_level
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Batería: {battery_level}%')
            time.sleep(1.0)

        goal_handle.succeed()
        result = Battery.Result()
        result.warning = 'Batería Baja, por favor cargue el robot!'
        return result

def main(args=None):
    rclpy.init(args=args)
    node = BatteryChargerServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
