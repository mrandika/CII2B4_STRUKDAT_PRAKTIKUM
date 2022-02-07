cmake_minimum_required(VERSION 3.20)
project(W14)

set(CMAKE_CXX_STANDARD 14)

add_executable(W14 main.cpp graph/graph.h graph/graph.cpp tree/tree.h tree/tree.cpp)
