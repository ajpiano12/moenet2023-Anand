// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Pose3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/pose3d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose3d_r
{
public:
  explicit Init_Pose3d_r(::custom_msgs::msg::Pose3d & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Pose3d r(::custom_msgs::msg::Pose3d::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Pose3d msg_;
};

class Init_Pose3d_t
{
public:
  Init_Pose3d_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose3d_r t(::custom_msgs::msg::Pose3d::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_Pose3d_r(msg_);
  }

private:
  ::custom_msgs::msg::Pose3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Pose3d>()
{
  return custom_msgs::msg::builder::Init_Pose3d_t();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D__BUILDER_HPP_
