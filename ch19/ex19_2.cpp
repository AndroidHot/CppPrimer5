#include "str_vec.h"
#include "new_delete.hpp"

int main() {
  StrVec str_vec;
  str_vec.resize(3);
  str_vec.push_back("Hello world,");
  return 0;
}
