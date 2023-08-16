// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:srv/PublishToRio.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__STRUCT_H_
#define CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
#include "custom_msgs/msg/detail/pose3d__struct.h"

/// Struct defined in srv/PublishToRio in the package custom_msgs.
typedef struct custom_msgs__srv__PublishToRio_Request
{
  custom_msgs__msg__Pose3d a;
} custom_msgs__srv__PublishToRio_Request;

// Struct for a sequence of custom_msgs__srv__PublishToRio_Request.
typedef struct custom_msgs__srv__PublishToRio_Request__Sequence
{
  custom_msgs__srv__PublishToRio_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__PublishToRio_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PublishToRio in the package custom_msgs.
typedef struct custom_msgs__srv__PublishToRio_Response
{
  bool b;
} custom_msgs__srv__PublishToRio_Response;

// Struct for a sequence of custom_msgs__srv__PublishToRio_Response.
typedef struct custom_msgs__srv__PublishToRio_Response__Sequence
{
  custom_msgs__srv__PublishToRio_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__PublishToRio_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__STRUCT_H_
