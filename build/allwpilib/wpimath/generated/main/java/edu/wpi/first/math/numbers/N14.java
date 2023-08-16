// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package edu.wpi.first.math.numbers;

import edu.wpi.first.math.Nat;
import edu.wpi.first.math.Num;

/**
 * A class representing the number 14.
*/
public final class N14 extends Num implements Nat<N14> {
  private N14() {
  }

  /**
   * The integer this class represents.
   *
   * @return The literal number 14.
  */
  @Override
  public int getNum() {
    return 14;
  }

  /**
   * The singleton instance of this class.
  */
  public static final N14 instance = new N14();
}