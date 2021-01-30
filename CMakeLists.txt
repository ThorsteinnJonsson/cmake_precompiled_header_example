CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
# The precompiled feature was introduced in CMake 3.16.
# Earlier versions won't work

project(cmake_precompiled_header_example VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17) # You can use earlier versions for your project if you want
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Run timer for each target
set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CMAKE_COMMAND} -E time")

# This subdirectory defines our library where we will generate a precompiled header.
add_subdirectory(my_common_lib_folder)

add_executable(cmake_precompiled_header_example main.cpp)

# Re-use precompiled header from my_common_lib.
# (We could have made the precompiled header public in my_common_lib and
# then we wouldn't have to do this, but I wanted to this functionality)
target_precompile_headers(cmake_precompiled_header_example REUSE_FROM my_common_lib)

target_link_libraries(cmake_precompiled_header_example 
  PUBLIC my_common_lib
)