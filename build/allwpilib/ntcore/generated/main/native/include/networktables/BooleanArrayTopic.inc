// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "networktables/BooleanArrayTopic.h"
#include "networktables/NetworkTableType.h"
#include "ntcore_cpp.h"

namespace nt {

inline BooleanArraySubscriber::BooleanArraySubscriber(
    NT_Subscriber handle, std::span<const int> defaultValue)
    : Subscriber{handle},
      m_defaultValue{defaultValue.begin(), defaultValue.end()} {}

inline std::vector<int> BooleanArraySubscriber::Get() const {
  return Get(m_defaultValue);
}

inline std::vector<int> BooleanArraySubscriber::Get(
    std::span<const int> defaultValue) const {
  return ::nt::GetBooleanArray(m_subHandle, defaultValue);
}

inline std::span<int> BooleanArraySubscriber::Get(wpi::SmallVectorImpl<int>& buf) const {
  return Get(buf, m_defaultValue);
}

inline std::span<int> BooleanArraySubscriber::Get(wpi::SmallVectorImpl<int>& buf, std::span<const int> defaultValue) const {
  return nt::GetBooleanArray(m_subHandle, buf, defaultValue);
}

inline TimestampedBooleanArray BooleanArraySubscriber::GetAtomic() const {
  return GetAtomic(m_defaultValue);
}

inline TimestampedBooleanArray BooleanArraySubscriber::GetAtomic(
    std::span<const int> defaultValue) const {
  return ::nt::GetAtomicBooleanArray(m_subHandle, defaultValue);
}

inline TimestampedBooleanArrayView BooleanArraySubscriber::GetAtomic(wpi::SmallVectorImpl<int>& buf) const {
  return GetAtomic(buf, m_defaultValue);
}

inline TimestampedBooleanArrayView BooleanArraySubscriber::GetAtomic(wpi::SmallVectorImpl<int>& buf, std::span<const int> defaultValue) const {
  return nt::GetAtomicBooleanArray(m_subHandle, buf, defaultValue);
}

inline std::vector<TimestampedBooleanArray>
BooleanArraySubscriber::ReadQueue() {
  return ::nt::ReadQueueBooleanArray(m_subHandle);
}

inline BooleanArrayTopic BooleanArraySubscriber::GetTopic() const {
  return BooleanArrayTopic{::nt::GetTopicFromHandle(m_subHandle)};
}

inline BooleanArrayPublisher::BooleanArrayPublisher(NT_Publisher handle)
    : Publisher{handle} {}

inline void BooleanArrayPublisher::Set(std::span<const int> value,
                                         int64_t time) {
  ::nt::SetBooleanArray(m_pubHandle, value, time);
}

inline void BooleanArrayPublisher::SetDefault(std::span<const int> value) {
  ::nt::SetDefaultBooleanArray(m_pubHandle, value);
}

inline BooleanArrayTopic BooleanArrayPublisher::GetTopic() const {
  return BooleanArrayTopic{::nt::GetTopicFromHandle(m_pubHandle)};
}

inline BooleanArrayEntry::BooleanArrayEntry(
    NT_Entry handle, std::span<const int> defaultValue)
    : BooleanArraySubscriber{handle, defaultValue},
      BooleanArrayPublisher{handle} {}

inline BooleanArrayTopic BooleanArrayEntry::GetTopic() const {
  return BooleanArrayTopic{::nt::GetTopicFromHandle(m_subHandle)};
}

inline void BooleanArrayEntry::Unpublish() {
  ::nt::Unpublish(m_pubHandle);
}

inline BooleanArraySubscriber BooleanArrayTopic::Subscribe(
    std::span<const int> defaultValue,
    const PubSubOptions& options) {
  return BooleanArraySubscriber{
      ::nt::Subscribe(m_handle, NT_BOOLEAN_ARRAY, "boolean[]", options),
      defaultValue};
}
inline BooleanArraySubscriber BooleanArrayTopic::SubscribeEx(
    std::string_view typeString, std::span<const int> defaultValue,
    const PubSubOptions& options) {
  return BooleanArraySubscriber{
      ::nt::Subscribe(m_handle, NT_BOOLEAN_ARRAY, typeString, options),
      defaultValue};
}

inline BooleanArrayPublisher BooleanArrayTopic::Publish(
    const PubSubOptions& options) {
  return BooleanArrayPublisher{
      ::nt::Publish(m_handle, NT_BOOLEAN_ARRAY, "boolean[]", options)};
}

inline BooleanArrayPublisher BooleanArrayTopic::PublishEx(
    std::string_view typeString,
    const wpi::json& properties, const PubSubOptions& options) {
  return BooleanArrayPublisher{
      ::nt::PublishEx(m_handle, NT_BOOLEAN_ARRAY, typeString, properties, options)};
}

inline BooleanArrayEntry BooleanArrayTopic::GetEntry(
    std::span<const int> defaultValue,
    const PubSubOptions& options) {
  return BooleanArrayEntry{
      ::nt::GetEntry(m_handle, NT_BOOLEAN_ARRAY, "boolean[]", options),
      defaultValue};
}
inline BooleanArrayEntry BooleanArrayTopic::GetEntryEx(
    std::string_view typeString, std::span<const int> defaultValue,
    const PubSubOptions& options) {
  return BooleanArrayEntry{
      ::nt::GetEntry(m_handle, NT_BOOLEAN_ARRAY, typeString, options),
      defaultValue};
}

}  // namespace nt