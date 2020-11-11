#include <ctime>
#include <iostream>
#include <random>

unsigned int random_number(unsigned int seed, unsigned int start,
                           unsigned int end) {
  static std::default_random_engine e(seed);
  static std::uniform_int_distribution<unsigned> u(start, end);
  return u(e);
}

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; ++i) {
    std::cout << random_number(time(0), 0, 100) << std::endl;
  }
  return 0;
}
