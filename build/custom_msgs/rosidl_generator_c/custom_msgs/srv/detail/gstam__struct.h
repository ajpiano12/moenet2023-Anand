// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:srv/Gstam.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GSTAM__STRUCT_H_
#define CUSTOM_MSGS__SRV__DETAIL__GSTAM__STRUCT_H_

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
// Member 'b'
// Member 'c'
// Member 'd'
// Member 'e'
// Member 'f'
// Member 'g'
// Member 'h'
// Member 'i'
#include "custom_msgs/msg/detail/pose3d__struct.h"

/// Struct defined in srv/Gstam in the package custom_msgs.
typedef struct custom_msgs__srv__Gstam_Request
{
  custom_msgs__msg__Pose3d a;
  custom_msgs__msg__Pose3d b;
  custom_msgs__msg__Pose3d c;
  custom_msgs__msg__Pose3d d;
  custom_msgs__msg__Pose3d e;
  custom_msgs__msg__Pose3d f;
  custom_msgs__msg__Pose3d g;
  custom_msgs__msg__Pose3d h;
  custom_msgs__msg__Pose3d i;
  double j;
} custom_msgs__srv__Gstam_Request;

// Struct for a sequence of custom_msgs__srv__Gstam_Request.
typedef struct custom_msgs__srv__Gstam_Request__Sequence
{
  custom_msgs__srv__Gstam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__Gstam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'final'
// already included above
// #include "custom_msgs/msg/detail/pose3d__struct.h"

/// Struct defined in srv/Gstam in the package custom_msgs.
typedef struct custom_msgs__srv__Gstam_Response
{
  custom_msgs__msg__Pose3d final;
} custom_msgs__srv__Gstam_Response;

// Struct for a sequence of custom_msgs__srv__Gstam_Response.
typedef struct custom_msgs__srv__Gstam_Response__Sequence
{
  custom_msgs__srv__Gstam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__Gstam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__SRV__DETAIL__GSTAM__STRUCT_H_
