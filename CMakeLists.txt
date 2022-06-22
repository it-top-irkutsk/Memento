cmake_minimum_required(VERSION 3.22)
project(Memento)

set(CMAKE_CXX_STANDARD 14)

add_executable(Memento main.cpp Person.h PersonSerialize.h)
