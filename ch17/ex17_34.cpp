#include <iostream>

int main(int argc, char const *argv[]) {
  bool a = true, b = false;
  std::cout << a << ", " << b << std::endl;
  std::cout << std::boolalpha << a << ", " << b << std::noboolalpha
            << std::endl;

  int c = 0x10, d = 010, e = 10;
  std::cout << c << ", " << d << ", " << e << std::endl;
  std::cout << std::showbase << std::hex << c << ", " << std::oct << d << ", "
            << std::dec << e << std::noshowbase << std::endl;

  float f = 10.0f, g = 10.1f;
  std::cout << f << ", " << g << std::endl;
  std::cout << std::showpoint << f << ", " << g << std::noshowpoint
            << std::endl;
  return 0;
}
