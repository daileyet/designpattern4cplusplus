package com.openthinks.samples.pattern4j.builder;

public class FordCarBuilder extends AbstractCarBuilder {
  
  public FordCarBuilder() {
    this.car = new FordCar();
  }
  
  @Override
  public void buildEngine() {
    this.car.setEngine("ENG-F_001");
  }

  @Override
  public void buildBody() {
    this.car.setBody("BOY-F_001");
  }

  @Override
  public void buildWheel() {
    this.car.setWheel("WHL-F_001");
  }

  @Override
  public AbstractCar getCar() {
    return this.car;
  }

}
