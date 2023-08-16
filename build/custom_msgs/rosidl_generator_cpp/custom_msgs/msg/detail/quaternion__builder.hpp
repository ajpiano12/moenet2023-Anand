// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__QUATERNION__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Quaternion_k
{
public:
  explicit Init_Quaternion_k(::custom_msgs::msg::Quaternion & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Quaternion k(::custom_msgs::msg::Quaternion::_k_type arg)
  {
    msg_.k = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Quaternion msg_;
};

class Init_Quaternion_j
{
public:
  explicit Init_Quaternion_j(::custom_msgs::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_k j(::custom_msgs::msg::Quaternion::_j_type arg)
  {
    msg_.j = std::move(arg);
    return Init_Quaternion_k(msg_);
  }

private:
  ::custom_msgs::msg::Quaternion msg_;
};

class Init_Quaternion_i
{
public:
  explicit Init_Quaternion_i(::custom_msgs::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_j i(::custom_msgs::msg::Quaternion::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_Quaternion_j(msg_);
  }

private:
  ::custom_msgs::msg::Quaternion msg_;
};

class Init_Quaternion_w
{
public:
  Init_Quaternion_w()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion_i w(::custom_msgs::msg::Quaternion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_Quaternion_i(msg_);
  }

private:
  ::custom_msgs::msg::Quaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Quaternion>()
{
  return custom_msgs::msg::builder::Init_Quaternion_w();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__QUATERNION__BUILDER_HPP_
