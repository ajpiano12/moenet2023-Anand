// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/Pose3dStamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "custom_msgs/msg/detail/pose3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__Pose3dStamped __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__Pose3dStamped __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose3dStamped_
{
  using Type = Pose3dStamped_<ContainerAllocator>;

  explicit Pose3dStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
    }
  }

  explicit Pose3dStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
    }
  }

  // field types and members
  using _pose_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _pose_type pose;
  using _time_type =
    double;
  _time_type time;

  // setters for named parameter idiom
  Type & set__pose(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::Pose3dStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::Pose3dStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Pose3dStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Pose3dStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__Pose3dStamped
    std::shared_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__Pose3dStamped
    std::shared_ptr<custom_msgs::msg::Pose3dStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose3dStamped_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose3dStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose3dStamped_

// alias to use template instance with default allocator
using Pose3dStamped =
  custom_msgs::msg::Pose3dStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D_STAMPED__STRUCT_HPP_
