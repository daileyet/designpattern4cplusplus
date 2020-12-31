cmake_minimum_required(VERSION 3.0)
PROJECT(iterator_test)
SET(SRC_LIST client.cpp)
SET(PATTERN_SRC iterator_types.cpp)

include_directories(./)

ADD_EXECUTABLE(iterator_test ${SRC_LIST} ${PATTERN_SRC})
