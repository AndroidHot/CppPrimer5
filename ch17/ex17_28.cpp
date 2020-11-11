#include <iostream>
#include <random>

unsigned int random_number() {
  static std::default_random_engine e;
  static std::uniform_int_distribution<unsigned> u;
  return u(e);
}

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; ++i) {
    std::cout << random_number() << std::endl;
  }
  return 0;
}
