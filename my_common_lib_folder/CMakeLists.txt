add_library(my_common_lib
            my_file.cpp)


target_precompile_headers(my_common_lib PUBLIC 
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
)

target_include_directories(my_common_lib 
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)