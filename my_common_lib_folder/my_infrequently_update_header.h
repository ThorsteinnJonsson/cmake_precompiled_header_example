#ifndef MY_INFREQUENTLY_USED_HEADER_H
#define MY_INFREQUENTLY_USED_HEADER_H

// These don't technically have to be included since they're listed before this
// header in the CMakeLists target_precompile_headers call.
#include <iostream>
#include <vector>

// This function is part of a precompiled header, so it is expected that it
// will not be changed frequently.
inline void MyInfrequentlyChangedFunction() {
  for (auto&& word : { "This", "header", "should", "not", "be", "changed", "often."}) {
    std::cout << word << " ";   
  }
  std::cout << "\n";
}

#endif // MY_INFREQUENTLY_USED_HEADER_H