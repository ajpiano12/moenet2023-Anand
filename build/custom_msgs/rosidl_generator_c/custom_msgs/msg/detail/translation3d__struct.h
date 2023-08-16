// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/Translation3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TRANSLATION3D__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__TRANSLATION3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Translation3d in the package custom_msgs.
typedef struct custom_msgs__msg__Translation3d
{
  float x;
  float y;
  float z;
} custom_msgs__msg__Translation3d;

// Struct for a sequence of custom_msgs__msg__Translation3d.
typedef struct custom_msgs__msg__Translation3d__Sequence
{
  custom_msgs__msg__Translation3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__Translation3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__TRANSLATION3D__STRUCT_H_
