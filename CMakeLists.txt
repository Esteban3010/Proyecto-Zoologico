cmake_minimum_required(VERSION 3.24)
project(proyecto)

set(CMAKE_CXX_STANDARD 17)

add_executable(proyecto main.cpp habitat.h animal.cpp habitat.cpp)
