// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/Pose3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't'
#include "custom_msgs/msg/detail/translation3d__struct.h"
// Member 'r'
#include "custom_msgs/msg/detail/rotation3d__struct.h"

/// Struct defined in msg/Pose3d in the package custom_msgs.
typedef struct custom_msgs__msg__Pose3d
{
  custom_msgs__msg__Translation3d t;
  custom_msgs__msg__Rotation3d r;
} custom_msgs__msg__Pose3d;

// Struct for a sequence of custom_msgs__msg__Pose3d.
typedef struct custom_msgs__msg__Pose3d__Sequence
{
  custom_msgs__msg__Pose3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__Pose3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D__STRUCT_H_
