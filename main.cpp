#include "my_file.h"

int main() {
  
  // Here <iostream> is included in a pre-compiled header so we do
  // not have to explicitly include it.
  std::cout << "Hello world\n";

  MyFunc();
  MyFuncInline();
  MyInfrequentlyChangedFunction();
  
  return 0;
}