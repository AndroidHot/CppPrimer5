#include <cmath>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << std::showbase << std::hexfloat << std::uppercase << std::sqrt(2)
            << std::noshowbase << std::defaultfloat << std::nouppercase
            << std::endl;
  return 0;
}
