cmake_minimum_required(VERSION 3.22)
project(moshcpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(moshcpp, src/main.cpp src/utils/greet.cpp)