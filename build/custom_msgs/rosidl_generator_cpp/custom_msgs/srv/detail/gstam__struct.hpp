// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/Gstam.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GSTAM__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GSTAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'a'
// Member 'b'
// Member 'c'
// Member 'd'
// Member 'e'
// Member 'f'
// Member 'g'
// Member 'h'
// Member 'i'
#include "custom_msgs/msg/detail/pose3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Gstam_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Gstam_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gstam_Request_
{
  using Type = Gstam_Request_<ContainerAllocator>;

  explicit Gstam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_init),
    b(_init),
    c(_init),
    d(_init),
    e(_init),
    f(_init),
    g(_init),
    h(_init),
    i(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j = 0.0;
    }
  }

  explicit Gstam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc, _init),
    b(_alloc, _init),
    c(_alloc, _init),
    d(_alloc, _init),
    e(_alloc, _init),
    f(_alloc, _init),
    g(_alloc, _init),
    h(_alloc, _init),
    i(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j = 0.0;
    }
  }

  // field types and members
  using _a_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _a_type a;
  using _b_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _b_type b;
  using _c_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _c_type c;
  using _d_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _d_type d;
  using _e_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _e_type e;
  using _f_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _f_type f;
  using _g_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _g_type g;
  using _h_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _h_type h;
  using _i_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _i_type i;
  using _j_type =
    double;
  _j_type j;

  // setters for named parameter idiom
  Type & set__a(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__e(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->e = _arg;
    return *this;
  }
  Type & set__f(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->f = _arg;
    return *this;
  }
  Type & set__g(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__h(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__i(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->i = _arg;
    return *this;
  }
  Type & set__j(
    const double & _arg)
  {
    this->j = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Gstam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Gstam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Gstam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Gstam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Gstam_Request
    std::shared_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Gstam_Request
    std::shared_ptr<custom_msgs::srv::Gstam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gstam_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->e != other.e) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->i != other.i) {
      return false;
    }
    if (this->j != other.j) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gstam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gstam_Request_

// alias to use template instance with default allocator
using Gstam_Request =
  custom_msgs::srv::Gstam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


// Include directives for member types
// Member 'final'
// already included above
// #include "custom_msgs/msg/detail/pose3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Gstam_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Gstam_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gstam_Response_
{
  using Type = Gstam_Response_<ContainerAllocator>;

  explicit Gstam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final(_init)
  {
    (void)_init;
  }

  explicit Gstam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _final_type =
    custom_msgs::msg::Pose3d_<ContainerAllocator>;
  _final_type final;

  // setters for named parameter idiom
  Type & set__final(
    const custom_msgs::msg::Pose3d_<ContainerAllocator> & _arg)
  {
    this->final = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Gstam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Gstam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Gstam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Gstam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Gstam_Response
    std::shared_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Gstam_Response
    std::shared_ptr<custom_msgs::srv::Gstam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gstam_Response_ & other) const
  {
    if (this->final != other.final) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gstam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gstam_Response_

// alias to use template instance with default allocator
using Gstam_Response =
  custom_msgs::srv::Gstam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct Gstam
{
  using Request = custom_msgs::srv::Gstam_Request;
  using Response = custom_msgs::srv::Gstam_Response;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__GSTAM__STRUCT_HPP_
