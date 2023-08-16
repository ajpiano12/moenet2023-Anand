// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/Pose3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/pose3d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't'
#include "custom_msgs/msg/detail/translation3d__traits.hpp"
// Member 'r'
#include "custom_msgs/msg/detail/rotation3d__traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose3d & msg,
  std::ostream & out)
{
  out << "{";
  // member: t
  {
    out << "t: ";
    to_flow_style_yaml(msg.t, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    to_flow_style_yaml(msg.r, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose3d & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t:\n";
    to_block_style_yaml(msg.t, out, indentation + 2);
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r:\n";
    to_block_style_yaml(msg.r, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose3d & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::msg::Pose3d & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::Pose3d & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::Pose3d>()
{
  return "custom_msgs::msg::Pose3d";
}

template<>
inline const char * name<custom_msgs::msg::Pose3d>()
{
  return "custom_msgs/msg/Pose3d";
}

template<>
struct has_fixed_size<custom_msgs::msg::Pose3d>
  : std::integral_constant<bool, has_fixed_size<custom_msgs::msg::Rotation3d>::value && has_fixed_size<custom_msgs::msg::Translation3d>::value> {};

template<>
struct has_bounded_size<custom_msgs::msg::Pose3d>
  : std::integral_constant<bool, has_bounded_size<custom_msgs::msg::Rotation3d>::value && has_bounded_size<custom_msgs::msg::Translation3d>::value> {};

template<>
struct is_message<custom_msgs::msg::Pose3d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D__TRAITS_HPP_
