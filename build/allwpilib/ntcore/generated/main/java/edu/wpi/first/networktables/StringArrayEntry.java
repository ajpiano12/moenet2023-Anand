// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package edu.wpi.first.networktables;

/**
 * NetworkTables StringArray entry.
 *
 * <p>Unlike NetworkTableEntry, the entry goes away when close() is called.
 */
public interface StringArrayEntry extends StringArraySubscriber, StringArrayPublisher {
  /** Stops publishing the entry if it's published. */
  void unpublish();
}