/**
 * 
 */
package com.openthinks.samples;

/**
 * @author dailey.dai@openthinks.com
 *
 */
public interface Demo {

  public void demo(String[] args) throws Exception;

  /**
   * accept these command line arguments or not
   * 
   * @param args arguments for command line input
   * @return true or false
   */
  public default boolean accept(String[] args) {
    return true;
  };

  /**
   * help of usage
   * 
   * @return description of usage
   */
  public default String usage() {
    return "";
  }
}
