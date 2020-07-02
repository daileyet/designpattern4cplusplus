package com.openthinks.samples.pattern4j.builder;

public abstract class AbstractCarBuilder {
  protected AbstractCar car;
  
  public abstract void buildEngine();
  public abstract void buildBody();
  public abstract void buildWheel();
  
  public abstract AbstractCar getCar();
}
