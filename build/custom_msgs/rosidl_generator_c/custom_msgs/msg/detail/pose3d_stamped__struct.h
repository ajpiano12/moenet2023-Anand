// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/Pose3dStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "custom_msgs/msg/detail/pose3d__struct.h"

/// Struct defined in msg/Pose3dStamped in the package custom_msgs.
typedef struct custom_msgs__msg__Pose3dStamped
{
  custom_msgs__msg__Pose3d pose;
  double time;
} custom_msgs__msg__Pose3dStamped;

// Struct for a sequence of custom_msgs__msg__Pose3dStamped.
typedef struct custom_msgs__msg__Pose3dStamped__Sequence
{
  custom_msgs__msg__Pose3dStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__Pose3dStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__STRUCT_H_
