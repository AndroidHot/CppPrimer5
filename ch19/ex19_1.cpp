#include <iostream>
#include <string>
#include "new_delete.hpp"

int main() {
  std::string *str = new std::string("Hello");
  delete str;
  return 0;
}
