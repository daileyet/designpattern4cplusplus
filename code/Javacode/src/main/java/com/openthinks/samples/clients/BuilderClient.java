package com.openthinks.samples.clients;

import java.util.List;
import com.openthinks.samples.pattern4j.builder.AbstractCar;
import com.openthinks.samples.pattern4j.builder.Cross4S;
import com.openthinks.samples.pattern4j.builder.FordCarBuilder;
import com.openthinks.samples.pattern4j.builder.VolvoCarBuilder;

public final class BuilderClient extends BaseClient{

  @Override
  protected String getClientName() {
    return "Builder";
  }

  @Override
  protected void execute(List<String> params) {
    AbstractCar car = null;
    Cross4S shop = new Cross4S();
    shop.setCarBuilder(new FordCarBuilder());
    car = shop.provideCar();
    car.showInfo();
    
    shop.setCarBuilder(new VolvoCarBuilder());
    car = shop.provideCar();
    car.showInfo();
  }


}
