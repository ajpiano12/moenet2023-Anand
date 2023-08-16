// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Pose3dStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/pose3d_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose3dStamped_time
{
public:
  explicit Init_Pose3dStamped_time(::custom_msgs::msg::Pose3dStamped & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Pose3dStamped time(::custom_msgs::msg::Pose3dStamped::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Pose3dStamped msg_;
};

class Init_Pose3dStamped_pose
{
public:
  Init_Pose3dStamped_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose3dStamped_time pose(::custom_msgs::msg::Pose3dStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Pose3dStamped_time(msg_);
  }

private:
  ::custom_msgs::msg::Pose3dStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Pose3dStamped>()
{
  return custom_msgs::msg::builder::Init_Pose3dStamped_pose();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__BUILDER_HPP_
