// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Rotation3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ROTATION3D__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ROTATION3D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/rotation3d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Rotation3d_q
{
public:
  Init_Rotation3d_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::Rotation3d q(::custom_msgs::msg::Rotation3d::_q_type arg)
  {
    msg_.q = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Rotation3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Rotation3d>()
{
  return custom_msgs::msg::builder::Init_Rotation3d_q();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ROTATION3D__BUILDER_HPP_
