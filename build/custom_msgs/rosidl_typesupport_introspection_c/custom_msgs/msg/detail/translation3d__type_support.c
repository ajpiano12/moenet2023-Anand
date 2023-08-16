// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/Translation3d.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/translation3d__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/translation3d__functions.h"
#include "custom_msgs/msg/detail/translation3d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__Translation3d__init(message_memory);
}

void custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_fini_function(void * message_memory)
{
  custom_msgs__msg__Translation3d__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Translation3d, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Translation3d, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Translation3d, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_members = {
  "custom_msgs__msg",  // message namespace
  "Translation3d",  // message name
  3,  // number of fields
  sizeof(custom_msgs__msg__Translation3d),
  custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_member_array,  // message members
  custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_type_support_handle = {
  0,
  &custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Translation3d)() {
  if (!custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__Translation3d__rosidl_typesupport_introspection_c__Translation3d_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif