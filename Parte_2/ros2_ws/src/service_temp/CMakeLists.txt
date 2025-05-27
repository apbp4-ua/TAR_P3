cmake_minimum_required(VERSION 3.5)
project(service_temp)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(srv_service_temp REQUIRED)

rosidl_get_typesupport_target(cpp_typesupport_target srv_service_temp "rosidl_typesupport_cpp")
rosidl_get_typesupport_target(python_typesupport_target srv_service_temp "rosidl_typesupport_python")

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  service_temp/service_temp_server.py
  service_temp/service_temp_client.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_export_dependencies(
  rosidl_default_runtime
  srv_service_temp
)

ament_package()
