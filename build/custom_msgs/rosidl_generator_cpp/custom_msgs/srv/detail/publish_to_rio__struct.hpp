// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/PublishToRio.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'a'
#include "custom_msgs/msg/detail/pose3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__PublishToRio_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__PublishToRio_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PublishToRio_Request_
{
  using Type = PublishToRio_Request_<ContainerAllocator>;

  explicit PublishToRio_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_init)
  {
    (void)_init;
  }

  explicit PublishToRio_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _a_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _a_type a;

  // setters for named parameter idiom
  Type & set__a(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::PublishToRio_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::PublishToRio_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PublishToRio_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PublishToRio_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__PublishToRio_Request
    std::shared_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__PublishToRio_Request
    std::shared_ptr<custom_msgs::srv::PublishToRio_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublishToRio_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublishToRio_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublishToRio_Request_

// alias to use template instance with default allocator
using PublishToRio_Request =
  custom_msgs::srv::PublishToRio_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__PublishToRio_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__PublishToRio_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PublishToRio_Response_
{
  using Type = PublishToRio_Response_<ContainerAllocator>;

  explicit PublishToRio_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b = false;
    }
  }

  explicit PublishToRio_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b = false;
    }
  }

  // field types and members
  using _b_type =
    bool;
  _b_type b;

  // setters for named parameter idiom
  Type & set__b(
    const bool & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::PublishToRio_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::PublishToRio_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PublishToRio_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PublishToRio_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__PublishToRio_Response
    std::shared_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__PublishToRio_Response
    std::shared_ptr<custom_msgs::srv::PublishToRio_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublishToRio_Response_ & other) const
  {
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublishToRio_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublishToRio_Response_

// alias to use template instance with default allocator
using PublishToRio_Response =
  custom_msgs::srv::PublishToRio_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct PublishToRio
{
  using Request = custom_msgs::srv::PublishToRio_Request;
  using Response = custom_msgs::srv::PublishToRio_Response;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PUBLISH_TO_RIO__STRUCT_HPP_
