// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_service_temp:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__BUILDER_HPP_
#define SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "srv_service_temp/srv/detail/conversion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace srv_service_temp
{

namespace srv
{

namespace builder
{

class Init_Conversion_Request_conversion_type
{
public:
  explicit Init_Conversion_Request_conversion_type(::srv_service_temp::srv::Conversion_Request & msg)
  : msg_(msg)
  {}
  ::srv_service_temp::srv::Conversion_Request conversion_type(::srv_service_temp::srv::Conversion_Request::_conversion_type_type arg)
  {
    msg_.conversion_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_service_temp::srv::Conversion_Request msg_;
};

class Init_Conversion_Request_input_temp
{
public:
  Init_Conversion_Request_input_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Conversion_Request_conversion_type input_temp(::srv_service_temp::srv::Conversion_Request::_input_temp_type arg)
  {
    msg_.input_temp = std::move(arg);
    return Init_Conversion_Request_conversion_type(msg_);
  }

private:
  ::srv_service_temp::srv::Conversion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_service_temp::srv::Conversion_Request>()
{
  return srv_service_temp::srv::builder::Init_Conversion_Request_input_temp();
}

}  // namespace srv_service_temp


namespace srv_service_temp
{

namespace srv
{

namespace builder
{

class Init_Conversion_Response_converted_temp
{
public:
  Init_Conversion_Response_converted_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_service_temp::srv::Conversion_Response converted_temp(::srv_service_temp::srv::Conversion_Response::_converted_temp_type arg)
  {
    msg_.converted_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_service_temp::srv::Conversion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_service_temp::srv::Conversion_Response>()
{
  return srv_service_temp::srv::builder::Init_Conversion_Response_converted_temp();
}

}  // namespace srv_service_temp

#endif  // SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__BUILDER_HPP_
