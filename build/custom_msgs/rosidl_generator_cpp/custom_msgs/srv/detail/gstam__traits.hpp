// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/Gstam.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GSTAM__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GSTAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/srv/detail/gstam__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

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
#include "custom_msgs/msg/detail/pose3d__traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gstam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    to_flow_style_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    to_flow_style_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    to_flow_style_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    to_flow_style_yaml(msg.d, out);
    out << ", ";
  }

  // member: e
  {
    out << "e: ";
    to_flow_style_yaml(msg.e, out);
    out << ", ";
  }

  // member: f
  {
    out << "f: ";
    to_flow_style_yaml(msg.f, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    to_flow_style_yaml(msg.g, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    to_flow_style_yaml(msg.h, out);
    out << ", ";
  }

  // member: i
  {
    out << "i: ";
    to_flow_style_yaml(msg.i, out);
    out << ", ";
  }

  // member: j
  {
    out << "j: ";
    rosidl_generator_traits::value_to_yaml(msg.j, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gstam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a:\n";
    to_block_style_yaml(msg.a, out, indentation + 2);
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b:\n";
    to_block_style_yaml(msg.b, out, indentation + 2);
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c:\n";
    to_block_style_yaml(msg.c, out, indentation + 2);
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d:\n";
    to_block_style_yaml(msg.d, out, indentation + 2);
  }

  // member: e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e:\n";
    to_block_style_yaml(msg.e, out, indentation + 2);
  }

  // member: f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f:\n";
    to_block_style_yaml(msg.f, out, indentation + 2);
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g:\n";
    to_block_style_yaml(msg.g, out, indentation + 2);
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h:\n";
    to_block_style_yaml(msg.h, out, indentation + 2);
  }

  // member: i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i:\n";
    to_block_style_yaml(msg.i, out, indentation + 2);
  }

  // member: j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j: ";
    rosidl_generator_traits::value_to_yaml(msg.j, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gstam_Request & msg, bool use_flow_style = false)
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

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::Gstam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::Gstam_Request & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::Gstam_Request>()
{
  return "custom_msgs::srv::Gstam_Request";
}

template<>
inline const char * name<custom_msgs::srv::Gstam_Request>()
{
  return "custom_msgs/srv/Gstam_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::Gstam_Request>
  : std::integral_constant<bool, has_fixed_size<custom_msgs::msg::Pose3d>::value> {};

template<>
struct has_bounded_size<custom_msgs::srv::Gstam_Request>
  : std::integral_constant<bool, has_bounded_size<custom_msgs::msg::Pose3d>::value> {};

template<>
struct is_message<custom_msgs::srv::Gstam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'final'
// already included above
// #include "custom_msgs/msg/detail/pose3d__traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gstam_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: final
  {
    out << "final: ";
    to_flow_style_yaml(msg.final, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gstam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final:\n";
    to_block_style_yaml(msg.final, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gstam_Response & msg, bool use_flow_style = false)
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

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::Gstam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::Gstam_Response & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::Gstam_Response>()
{
  return "custom_msgs::srv::Gstam_Response";
}

template<>
inline const char * name<custom_msgs::srv::Gstam_Response>()
{
  return "custom_msgs/srv/Gstam_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::Gstam_Response>
  : std::integral_constant<bool, has_fixed_size<custom_msgs::msg::Pose3d>::value> {};

template<>
struct has_bounded_size<custom_msgs::srv::Gstam_Response>
  : std::integral_constant<bool, has_bounded_size<custom_msgs::msg::Pose3d>::value> {};

template<>
struct is_message<custom_msgs::srv::Gstam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::Gstam>()
{
  return "custom_msgs::srv::Gstam";
}

template<>
inline const char * name<custom_msgs::srv::Gstam>()
{
  return "custom_msgs/srv/Gstam";
}

template<>
struct has_fixed_size<custom_msgs::srv::Gstam>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::Gstam_Request>::value &&
    has_fixed_size<custom_msgs::srv::Gstam_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::Gstam>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::Gstam_Request>::value &&
    has_bounded_size<custom_msgs::srv::Gstam_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::Gstam>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::Gstam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::Gstam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__GSTAM__TRAITS_HPP_
