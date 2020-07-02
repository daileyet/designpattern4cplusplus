package com.openthinks.samples;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/**
 * application template class
 * 
 * @author dailey.dai@openthinks.com
 *
 */
public abstract class AbstractDemo implements Demo {

  @Override
  public void demo(String[] args) throws Exception {
    if (!accept(args))
      return;
    // only execute application when accept the arguments
    final List<String> params = Arrays.asList(args);
    run(new ArrayList<>(params));
  }

  @Override
  public boolean accept(String[] args) {
    return Arrays.asList(args).contains(keyParam());
  }

  /**
   * Delegate application execution
   * 
   * @param params arguments for command line input
   * @throws Exception
   */
  protected abstract void run(final List<String> params) throws Exception;

  protected abstract String keyParam();

  /**
   * resolve partly parameters by given token
   * 
   * @param params arguments for command line input
   * @param token token which arguments start with
   * @return {@link PartParams}
   */
  protected PartParams getPartParamsBy(final List<String> params, final String token) {
    PartParams part = new PartParams();
    int index = params.indexOf(token);
    if (index == -1 || index + 1 >= params.size())
      return part;
    part.hasToken = true;
    for (int i = index + 1, j = params.size(); i < j; i++) {
      String param = params.get(i);
      if (param.startsWith("-")) {
        break;
      }
      part.addParam(param);
    }
    return part;
  }

  public static final class PartParams {
    boolean hasToken = false;
    List<String> params = new ArrayList<>();

    void addParam(String param) {
      params.add(param);
    }

    public List<String> getParams() {
      return Collections.unmodifiableList(params);
    }

    public boolean isHasToken() {
      return hasToken;
    }

    public boolean isEmpty() {
      return params.isEmpty();
    }

    public String get(int index) {
      return params.get(index);
    }

    public String getAllJoined(String joined) {
      String delimiter = joined == null ? " " : joined;
      return String.join(delimiter, params);
    }

    public String getAllJoined() {
      return getAllJoined(" ");
    }
  }
}
