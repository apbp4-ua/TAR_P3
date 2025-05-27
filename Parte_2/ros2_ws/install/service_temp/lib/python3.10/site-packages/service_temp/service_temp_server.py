import rclpy
from rclpy.node import Node
from srv_service_temp.srv import Conversion

class TempService(Node):
    def __init__(self):
        super().__init__('temperature_service_server')
        self.srv = self.create_service(Conversion, 'convert_temperature', self.callback)
        self.get_logger().info(f"Servicio '{self.srv.srv_name}' esperando peticiones.")

    def callback(self, request, response):
        self.get_logger().info(
            f'Petición recibida: input_temp={request.input_temp:.2f}, '
            f'conversion_type="{request.conversion_type}"'
        )
        if request.conversion_type == "Cel_to_Far":
            response.converted_temp = (request.input_temp * 9 / 5) + 32
            self.get_logger().info(f'Enviando respuesta: {response.converted_temp:.2f} Fahrenheit')
        elif request.conversion_type == "Far_to_Cel":
            response.converted_temp = (request.input_temp - 32) * 5 / 9
            self.get_logger().info(f'Enviando respuesta: {response.converted_temp:.2f} Celsius')
        else:
            self.get_logger().error('Tipo de conversión inválido.')
            response.converted_temp = float('nan')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = TempService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
