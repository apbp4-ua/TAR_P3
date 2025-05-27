// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_service_temp:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__STRUCT_H_
#define SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'conversion_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Conversion in the package srv_service_temp.
typedef struct srv_service_temp__srv__Conversion_Request
{
  double input_temp;
  /// Cel_to_Far o Far_to_Cel
  rosidl_runtime_c__String conversion_type;
} srv_service_temp__srv__Conversion_Request;

// Struct for a sequence of srv_service_temp__srv__Conversion_Request.
typedef struct srv_service_temp__srv__Conversion_Request__Sequence
{
  srv_service_temp__srv__Conversion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_service_temp__srv__Conversion_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Conversion in the package srv_service_temp.
typedef struct srv_service_temp__srv__Conversion_Response
{
  double converted_temp;
} srv_service_temp__srv__Conversion_Response;

// Struct for a sequence of srv_service_temp__srv__Conversion_Response.
typedef struct srv_service_temp__srv__Conversion_Response__Sequence
{
  srv_service_temp__srv__Conversion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_service_temp__srv__Conversion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_SERVICE_TEMP__SRV__DETAIL__CONVERSION__STRUCT_H_
