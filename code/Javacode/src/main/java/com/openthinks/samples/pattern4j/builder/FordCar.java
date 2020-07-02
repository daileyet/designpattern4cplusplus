package com.openthinks.samples.pattern4j.builder;

public class FordCar extends AbstractCar {
  @Override
  public void showInfo() {
    System.out.println("Ford");
    super.showInfo();
  }
}
