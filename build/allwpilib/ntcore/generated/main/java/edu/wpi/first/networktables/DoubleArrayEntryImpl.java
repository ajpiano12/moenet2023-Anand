// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package edu.wpi.first.networktables;

/** NetworkTables DoubleArray implementation. */
@SuppressWarnings("PMD.ArrayIsStoredDirectly")
final class DoubleArrayEntryImpl extends EntryBase implements DoubleArrayEntry {
  /**
   * Constructor.
   *
   * @param topic Topic
   * @param handle Native handle
   * @param defaultValue Default value for get()
   */
  DoubleArrayEntryImpl(DoubleArrayTopic topic, int handle, double[] defaultValue) {
    super(handle);
    m_topic = topic;
    m_defaultValue = defaultValue;
  }

  @Override
  public DoubleArrayTopic getTopic() {
    return m_topic;
  }

  @Override
  public double[] get() {
    return NetworkTablesJNI.getDoubleArray(m_handle, m_defaultValue);
  }

  @Override
  public double[] get(double[] defaultValue) {
    return NetworkTablesJNI.getDoubleArray(m_handle, defaultValue);
  }

  @Override
  public TimestampedDoubleArray getAtomic() {
    return NetworkTablesJNI.getAtomicDoubleArray(m_handle, m_defaultValue);
  }

  @Override
  public TimestampedDoubleArray getAtomic(double[] defaultValue) {
    return NetworkTablesJNI.getAtomicDoubleArray(m_handle, defaultValue);
  }

  @Override
  public TimestampedDoubleArray[] readQueue() {
    return NetworkTablesJNI.readQueueDoubleArray(m_handle);
  }

  @Override
  public double[][] readQueueValues() {
    return NetworkTablesJNI.readQueueValuesDoubleArray(m_handle);
  }

  @Override
  public void set(double[] value, long time) {
    NetworkTablesJNI.setDoubleArray(m_handle, time, value);
  }

  @Override
  public void setDefault(double[] value) {
    NetworkTablesJNI.setDefaultDoubleArray(m_handle, 0, value);
  }

  @Override
  public void unpublish() {
    NetworkTablesJNI.unpublish(m_handle);
  }

  private final DoubleArrayTopic m_topic;
  private final double[] m_defaultValue;
}