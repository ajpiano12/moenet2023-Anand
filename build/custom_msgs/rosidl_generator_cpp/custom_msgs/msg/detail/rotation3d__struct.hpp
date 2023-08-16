// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/Rotation3d.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ROTATION3D__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ROTATION3D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'q'
#include "custom_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__Rotation3d __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__Rotation3d __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rotation3d_
{
  using Type = Rotation3d_<ContainerAllocator>;

  explicit Rotation3d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_init)
  {
    (void)_init;
  }

  explicit Rotation3d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _q_type =
    custom_msgs::msg::Quaternion_<ContainerAllocator>;
  _q_type q;

  // setters for named parameter idiom
  Type & set__q(
    const custom_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->q = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::Rotation3d_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::Rotation3d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Rotation3d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Rotation3d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__Rotation3d
    std::shared_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__Rotation3d
    std::shared_ptr<custom_msgs::msg::Rotation3d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rotation3d_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rotation3d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rotation3d_

// alias to use template instance with default allocator
using Rotation3d =
  custom_msgs::msg::Rotation3d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ROTATION3D__STRUCT_HPP_