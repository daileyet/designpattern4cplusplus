package com.openthinks.samples;

import java.util.Iterator;
import java.util.ServiceLoader;


public class Bootstarter {
  public static void main(String[] args) {
    System.out.println("Going to run...");
    ServiceLoader<Demo> serviceLoader = ServiceLoader.load(Demo.class);
    Iterator<Demo> iterator = serviceLoader.iterator();
    while (iterator.hasNext()) {
      Demo demo = iterator.next();
      processDemo(demo, args);
    }
    System.out.println("Done.");
  }

  static void processDemo(Demo demo, String[] args) {
    try {
      demo.demo(args);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
