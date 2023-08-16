// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/PublishToRio.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/publish_to_rio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_PublishToRio_Request_a
{
public:
  Init_PublishToRio_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::PublishToRio_Request a(::custom_msgs::srv::PublishToRio_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::PublishToRio_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::PublishToRio_Request>()
{
  return custom_msgs::srv::builder::Init_PublishToRio_Request_a();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_PublishToRio_Response_b
{
public:
  Init_PublishToRio_Response_b()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::PublishToRio_Response b(::custom_msgs::srv::PublishToRio_Response::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::PublishToRio_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::PublishToRio_Response>()
{
  return custom_msgs::srv::builder::Init_PublishToRio_Response_b();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__BUILDER_HPP_
