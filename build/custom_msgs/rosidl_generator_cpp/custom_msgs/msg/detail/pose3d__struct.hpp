// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/Pose3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE3D__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__POSE3D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 't'
#include "custom_msgs/msg/detail/translation3d__struct.hpp"
// Member 'r'
#include "custom_msgs/msg/detail/rotation3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__Pose3d __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__Pose3d __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose3d_
{
  using Type = Pose3d_<ContainerAllocator>;

  explicit Pose3d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t(_init),
    r(_init)
  {
    (void)_init;
  }

  explicit Pose3d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t(_alloc, _init),
    r(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _t_type =
    custom_msgs::msg::Translation3d_<ContainerAllocator>;
  _t_type t;
  using _r_type =
    custom_msgs::msg::Rotation3d_<ContainerAllocator>;
  _r_type r;

  // setters for named parameter idiom
  Type & set__t(
    const custom_msgs::msg::Translation3d_<ContainerAllocator> & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__r(
    const custom_msgs::msg::Rotation3d_<ContainerAllocator> & _arg)
  {
    this->r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::Pose3d_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::Pose3d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Pose3d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Pose3d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__Pose3d
    std::shared_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__Pose3d
    std::shared_ptr<custom_msgs::msg::Pose3d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose3d_ & other) const
  {
    if (this->t != other.t) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose3d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose3d_

// alias to use template instance with default allocator
using Pose3d =
  custom_msgs::msg::Pose3d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE3D__STRUCT_HPP_
