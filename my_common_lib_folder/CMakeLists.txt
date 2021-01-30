add_library(my_common_lib
            my_file.cpp
)

# Generate precompiled header which includes lots of STL headers.
# This generates a file cmake_pch.h which is force-inluded in all
# source files in this target, so there is no need to include the
# precompiled header explicitly in your file.
target_precompile_headers(my_common_lib PRIVATE 
    # STL containers
    <string>
    <vector>
    <array>
    <map>
    <unordered_map>
    <set>
    <unordered_set>
    <queue>
    <stack>
    <deque>
    # General utilities
    <string_view>
    <tuple>
    <optional>
    <variant>
    <any>
    # Input/Output
    <iostream>
    <fstream>
    <sstream>
    # STL algorithms and utilities
    <algorithm>
    <functional>
    <memory>
    <utility>
    <numeric>
    <limits>
    # Threading
    <mutex>
    <atomic>
    <thread>
    # Date and time
    <chrono>
    # You can also add your own headers. Be sure to include only headers that 
    # stable (i.e. not updated frequently)
    my_infrequently_update_header.h    
)

target_include_directories(my_common_lib 
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)