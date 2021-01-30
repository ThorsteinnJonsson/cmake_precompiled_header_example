CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
# The precompiled feature was introduced in CMake 3.16.
# Earlier versions won't work

project(cmake_precompiled_header_example VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17) # You can use earlier versions for your project if you want
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cmake_precompiled_header_example main.cpp)