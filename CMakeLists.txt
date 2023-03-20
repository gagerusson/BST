cmake_minimum_required(VERSION 3.24)
project(BST)

set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp BST.h BSTInterface.h BSTInterface.h scratch.cpp Node.h test.cpp)
