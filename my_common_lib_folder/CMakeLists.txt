add_library(my_common_lib
            my_file.cpp)

target_include_directories(my_common_lib 
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)