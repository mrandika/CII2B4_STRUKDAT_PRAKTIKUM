cmake_minimum_required(VERSION 3.20)
project(W11)

set(CMAKE_CXX_STANDARD 14)

add_executable(W11 main.cpp stack/stack.h stack/stack.cpp queue/queue.h queue/queue.cpp)
