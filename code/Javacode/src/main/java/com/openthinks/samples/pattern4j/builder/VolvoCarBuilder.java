package com.openthinks.samples.pattern4j.builder;

public class VolvoCarBuilder extends AbstractCarBuilder {

  public VolvoCarBuilder() {
    this.car = new VolvoCar();
  }

  @Override
  public void buildEngine() {
    this.car.setEngine("ENG-V_001");
  }

  @Override
  public void buildBody() {
    this.car.setBody("BOY-V_001");
  }

  @Override
  public void buildWheel() {
    this.car.setWheel("WHL-V_001");
  }

  @Override
  public AbstractCar getCar() {
    return this.car;
  }

}
