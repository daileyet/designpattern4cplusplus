package com.openthinks.samples.pattern4j.builder;

public abstract class AbstractCar {
  private String wheel;
  private String body;
  private String engine;

  void setWheel(String wheel) {
    this.wheel = wheel;
  }

  void setBody(String body) {
    this.body = body;
  }

  void setEngine(String engine) {
    this.engine = engine;
  }

  public void showInfo() {
    System.out.println("Wheel-" + wheel + ",Body-" + body + ",Engine-" + engine);
  }
}
