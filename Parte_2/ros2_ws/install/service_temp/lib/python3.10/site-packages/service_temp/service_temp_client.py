import sys
import rclpy
from rclpy.node import Node
from srv_service_temp.srv import Conversion

class TempClient(Node):
    def __init__(self):
        super().__init__('temperature_service_client')
        self.cli = self.create_client(Conversion, 'convert_temperature')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando al servidor...')
        self.req = Conversion.Request()

    def send_request(self, temp, conv_type):
        self.req.input_temp = float(temp)
        self.req.conversion_type = conv_type
        future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    if len(sys.argv) != 3:
        print("Uso: ros2 run service_temp service_temp_client <valor> <Cel_to_Far|Far_to_Cel>")
        return
    temp = sys.argv[1]
    conv = sys.argv[2]
    client = TempClient()
    response = client.send_request(temp, conv)
    print(f'Resultado: {response.converted_temp}')
    rclpy.shutdown()

if __name__ == '__main__':
    main()
