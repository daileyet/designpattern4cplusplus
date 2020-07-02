package com.openthinks.samples.pattern4j.builder;

public class VolvoCar extends AbstractCar {
  @Override
  public void showInfo() {
    System.out.println("Volvo");
    super.showInfo();
  }
}
