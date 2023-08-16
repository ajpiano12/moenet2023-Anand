// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package edu.wpi.first.math.numbers;

import edu.wpi.first.math.Nat;
import edu.wpi.first.math.Num;

/**
 * A class representing the number 6.
*/
public final class N6 extends Num implements Nat<N6> {
  private N6() {
  }

  /**
   * The integer this class represents.
   *
   * @return The literal number 6.
  */
  @Override
  public int getNum() {
    return 6;
  }

  /**
   * The singleton instance of this class.
  */
  public static final N6 instance = new N6();
}