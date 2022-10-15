cmake_minimum_required(VERSION 3.16)
project(docker_test)
set(CMAKE_CXX_STANDARD 17)

SET (CMAKE_CXX_COMPILER           "/usr/bin/clang++")
SET (CMAKE_C_COMPILER             "/usr/bin/clang")

ADD_EXECUTABLE(docker_test main.cpp)
target_compile_definitions(docker_test PUBLIC BAR=1)
