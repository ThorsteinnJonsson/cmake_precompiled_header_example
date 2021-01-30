#ifndef MY_FILE_H
#define MY_FILE_H

void my_func();

inline void my_func_inline() {
  std::cout << "This also works!\n";
}

#endif // MY_FILE_H