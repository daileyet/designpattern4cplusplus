/**
 * 
 */
package com.openthinks.samples.clients;

import java.util.List;
import com.openthinks.samples.AbstractDemo;

/**
 * @author dailey.dai@openthinks.com
 *
 */
public abstract class BaseClient extends AbstractDemo {

  /* (non-Javadoc)
   * @see com.openthinks.samples.AbstractDemo#run(java.util.List)
   */
  @Override
  protected void run(List<String> params) throws Exception {
    System.out.println("---------------------------");
    System.out.println("DESIGN PATTERN:"+getClientName());
    System.out.println("---------------------------");
    execute(params);
  }

  protected abstract String getClientName();

  protected abstract void execute(List<String> params);

  
  @Override
  public boolean accept(String[] args) {
    return true;
  }
  /* (non-Javadoc)
   * @see com.openthinks.samples.AbstractDemo#keyParam()
   */
  @Override
  protected String keyParam() {
    return null;
  }

}
