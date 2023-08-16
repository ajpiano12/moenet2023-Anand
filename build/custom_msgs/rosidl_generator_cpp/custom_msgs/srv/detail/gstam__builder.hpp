// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/Gstam.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GSTAM__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GSTAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/gstam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Gstam_Request_j
{
public:
  explicit Init_Gstam_Request_j(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Gstam_Request j(::custom_msgs::srv::Gstam_Request::_j_type arg)
  {
    msg_.j = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_i
{
public:
  explicit Init_Gstam_Request_i(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_j i(::custom_msgs::srv::Gstam_Request::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_Gstam_Request_j(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_h
{
public:
  explicit Init_Gstam_Request_h(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_i h(::custom_msgs::srv::Gstam_Request::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_Gstam_Request_i(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_g
{
public:
  explicit Init_Gstam_Request_g(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_h g(::custom_msgs::srv::Gstam_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Gstam_Request_h(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_f
{
public:
  explicit Init_Gstam_Request_f(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_g f(::custom_msgs::srv::Gstam_Request::_f_type arg)
  {
    msg_.f = std::move(arg);
    return Init_Gstam_Request_g(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_e
{
public:
  explicit Init_Gstam_Request_e(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_f e(::custom_msgs::srv::Gstam_Request::_e_type arg)
  {
    msg_.e = std::move(arg);
    return Init_Gstam_Request_f(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_d
{
public:
  explicit Init_Gstam_Request_d(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_e d(::custom_msgs::srv::Gstam_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_Gstam_Request_e(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_c
{
public:
  explicit Init_Gstam_Request_c(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_d c(::custom_msgs::srv::Gstam_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_Gstam_Request_d(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_b
{
public:
  explicit Init_Gstam_Request_b(::custom_msgs::srv::Gstam_Request & msg)
  : msg_(msg)
  {}
  Init_Gstam_Request_c b(::custom_msgs::srv::Gstam_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Gstam_Request_c(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

class Init_Gstam_Request_a
{
public:
  Init_Gstam_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gstam_Request_b a(::custom_msgs::srv::Gstam_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Gstam_Request_b(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Gstam_Request>()
{
  return custom_msgs::srv::builder::Init_Gstam_Request_a();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Gstam_Response_final
{
public:
  Init_Gstam_Response_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::Gstam_Response final(::custom_msgs::srv::Gstam_Response::_final_type arg)
  {
    msg_.final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Gstam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Gstam_Response>()
{
  return custom_msgs::srv::builder::Init_Gstam_Response_final();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__GSTAM__BUILDER_HPP_
