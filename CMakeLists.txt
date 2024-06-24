cmake_minimum_required(VERSION 3.0)
project(xcpp)

include_directories(include)

add_executable(main main.cpp lib/xcpp.cpp)
