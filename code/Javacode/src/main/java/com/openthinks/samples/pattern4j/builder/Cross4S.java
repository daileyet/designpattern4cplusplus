package com.openthinks.samples.pattern4j.builder;

public final class Cross4S {
  private AbstractCarBuilder carBuilder;

  public void setCarBuilder(AbstractCarBuilder carBuilder) {
    this.carBuilder = carBuilder;
  }

  public AbstractCar provideCar() {
    if (this.carBuilder == null)
      return null;
    this.carBuilder.buildEngine();
    this.carBuilder.buildBody();
    this.carBuilder.buildWheel();
    return this.carBuilder.getCar();
  }
}
