// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Translation3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TRANSLATION3D__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TRANSLATION3D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/translation3d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Translation3d_z
{
public:
  explicit Init_Translation3d_z(::custom_msgs::msg::Translation3d & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Translation3d z(::custom_msgs::msg::Translation3d::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Translation3d msg_;
};

class Init_Translation3d_y
{
public:
  explicit Init_Translation3d_y(::custom_msgs::msg::Translation3d & msg)
  : msg_(msg)
  {}
  Init_Translation3d_z y(::custom_msgs::msg::Translation3d::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Translation3d_z(msg_);
  }

private:
  ::custom_msgs::msg::Translation3d msg_;
};

class Init_Translation3d_x
{
public:
  Init_Translation3d_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Translation3d_y x(::custom_msgs::msg::Translation3d::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Translation3d_y(msg_);
  }

private:
  ::custom_msgs::msg::Translation3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Translation3d>()
{
  return custom_msgs::msg::builder::Init_Translation3d_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TRANSLATION3D__BUILDER_HPP_
