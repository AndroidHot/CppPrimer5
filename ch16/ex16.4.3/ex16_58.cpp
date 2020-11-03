#include <iostream>
#include <string>

#include "str_vec.h"

int main() {
  StrVec str_vec;
  str_vec.emplace_back(10, 'c');

  printf("%s\n", str_vec.begin()->c_str());
  return 0;
}