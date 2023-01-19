cmake_minimum_required(VERSION 3.22)

project(helloworld)

set(CMAKE_CXX_CLANG_TIDY 
  clang-tidy;
  -header-filter=.;
  -checks=*;)


add_executable(hello main.cpp)
