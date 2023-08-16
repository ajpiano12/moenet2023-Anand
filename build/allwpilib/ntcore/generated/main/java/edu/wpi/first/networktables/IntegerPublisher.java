// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package edu.wpi.first.networktables;

import java.util.function.LongConsumer;

/** NetworkTables Integer publisher. */
public interface IntegerPublisher extends Publisher, LongConsumer {
  /**
   * Get the corresponding topic.
   *
   * @return Topic
   */
  @Override
  IntegerTopic getTopic();

  /**
   * Publish a new value using current NT time.
   *
   * @param value value to publish
   */
  default void set(long value) {
    set(value, 0);
  }


  /**
   * Publish a new value.
   *
   * @param value value to publish
   * @param time timestamp; 0 indicates current NT time should be used
   */
  void set(long value, long time);

  /**
   * Publish a default value.
   * On reconnect, a default value will never be used in preference to a
   * published value.
   *
   * @param value value
   */
  void setDefault(long value);

  @Override
  default void accept(long value) {
    set(value);
  }
}