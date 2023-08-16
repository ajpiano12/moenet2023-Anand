// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/GetFromRio.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GET_FROM_RIO__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GET_FROM_RIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/srv/detail/get_from_rio__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFromRio_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFromRio_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFromRio_Request & msg, bool use_flow_style = false)
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
  const custom_msgs::srv::GetFromRio_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::GetFromRio_Request & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::GetFromRio_Request>()
{
  return "custom_msgs::srv::GetFromRio_Request";
}

template<>
inline const char * name<custom_msgs::srv::GetFromRio_Request>()
{
  return "custom_msgs/srv/GetFromRio_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::GetFromRio_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::GetFromRio_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::GetFromRio_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'b'
#include "custom_msgs/msg/detail/pose3d__traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFromRio_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: b
  {
    out << "b: ";
    to_flow_style_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFromRio_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFromRio_Response & msg, bool use_flow_style = false)
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
  const custom_msgs::srv::GetFromRio_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::GetFromRio_Response & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::GetFromRio_Response>()
{
  return "custom_msgs::srv::GetFromRio_Response";
}

template<>
inline const char * name<custom_msgs::srv::GetFromRio_Response>()
{
  return "custom_msgs/srv/GetFromRio_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::GetFromRio_Response>
  : std::integral_constant<bool, has_fixed_size<custom_msgs::msg::Pose3d>::value> {};

template<>
struct has_bounded_size<custom_msgs::srv::GetFromRio_Response>
  : std::integral_constant<bool, has_bounded_size<custom_msgs::msg::Pose3d>::value> {};

template<>
struct is_message<custom_msgs::srv::GetFromRio_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::GetFromRio>()
{
  return "custom_msgs::srv::GetFromRio";
}

template<>
inline const char * name<custom_msgs::srv::GetFromRio>()
{
  return "custom_msgs/srv/GetFromRio";
}

template<>
struct has_fixed_size<custom_msgs::srv::GetFromRio>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::GetFromRio_Request>::value &&
    has_fixed_size<custom_msgs::srv::GetFromRio_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::GetFromRio>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::GetFromRio_Request>::value &&
    has_bounded_size<custom_msgs::srv::GetFromRio_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::GetFromRio>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::GetFromRio_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::GetFromRio_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__GET_FROM_RIO__TRAITS_HPP_
