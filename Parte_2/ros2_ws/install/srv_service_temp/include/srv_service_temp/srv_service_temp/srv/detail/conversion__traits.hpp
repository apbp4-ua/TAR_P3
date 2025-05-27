// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_service_temp:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__TRAITS_HPP_
#define SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "srv_service_temp/srv/detail/conversion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace srv_service_temp
{

namespace srv
{

inline void to_flow_style_yaml(
  const Conversion_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_temp
  {
    out << "input_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.input_temp, out);
    out << ", ";
  }

  // member: conversion_type
  {
    out << "conversion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.conversion_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conversion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.input_temp, out);
    out << "\n";
  }

  // member: conversion_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conversion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.conversion_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conversion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace srv_service_temp

namespace rosidl_generator_traits
{

[[deprecated("use srv_service_temp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_service_temp::srv::Conversion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_service_temp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_service_temp::srv::to_yaml() instead")]]
inline std::string to_yaml(const srv_service_temp::srv::Conversion_Request & msg)
{
  return srv_service_temp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<srv_service_temp::srv::Conversion_Request>()
{
  return "srv_service_temp::srv::Conversion_Request";
}

template<>
inline const char * name<srv_service_temp::srv::Conversion_Request>()
{
  return "srv_service_temp/srv/Conversion_Request";
}

template<>
struct has_fixed_size<srv_service_temp::srv::Conversion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<srv_service_temp::srv::Conversion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<srv_service_temp::srv::Conversion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace srv_service_temp
{

namespace srv
{

inline void to_flow_style_yaml(
  const Conversion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: converted_temp
  {
    out << "converted_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.converted_temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conversion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: converted_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "converted_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.converted_temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conversion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace srv_service_temp

namespace rosidl_generator_traits
{

[[deprecated("use srv_service_temp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const srv_service_temp::srv::Conversion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  srv_service_temp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use srv_service_temp::srv::to_yaml() instead")]]
inline std::string to_yaml(const srv_service_temp::srv::Conversion_Response & msg)
{
  return srv_service_temp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<srv_service_temp::srv::Conversion_Response>()
{
  return "srv_service_temp::srv::Conversion_Response";
}

template<>
inline const char * name<srv_service_temp::srv::Conversion_Response>()
{
  return "srv_service_temp/srv/Conversion_Response";
}

template<>
struct has_fixed_size<srv_service_temp::srv::Conversion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_service_temp::srv::Conversion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_service_temp::srv::Conversion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_service_temp::srv::Conversion>()
{
  return "srv_service_temp::srv::Conversion";
}

template<>
inline const char * name<srv_service_temp::srv::Conversion>()
{
  return "srv_service_temp/srv/Conversion";
}

template<>
struct has_fixed_size<srv_service_temp::srv::Conversion>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_service_temp::srv::Conversion_Request>::value &&
    has_fixed_size<srv_service_temp::srv::Conversion_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_service_temp::srv::Conversion>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_service_temp::srv::Conversion_Request>::value &&
    has_bounded_size<srv_service_temp::srv::Conversion_Response>::value
  >
{
};

template<>
struct is_service<srv_service_temp::srv::Conversion>
  : std::true_type
{
};

template<>
struct is_service_request<srv_service_temp::srv::Conversion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_service_temp::srv::Conversion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__TRAITS_HPP_
