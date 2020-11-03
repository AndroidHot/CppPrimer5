#include <iostream>
#include <string>
#include <vector>

template <typename T>
size_t count(std::vector<T> &vec, const T &t) {
  size_t result = 0;
  for (const T &v : vec) {
    if (v == t) {
      ++result;
    }
  }
  return result;
}

template <>
size_t count(std::vector<const char *> &vec, const char *const &t) {
  size_t result = 0;
  for (const char *v : vec) {
    if (strcmp(v, t) == 0) {
      ++result;
    }
  }
  return result;
}

int main() {
  std::vector<double> vec1({1.0, 2.0, 3.0, 4.0, 4.0});
  double value1 = 4.0;
  printf("%ld\n", count(vec1, value1));

  std::vector<int> vec2({1, 2, 3, 4, 4});
  int value2 = 1;
  printf("%ld\n", count(vec2, value2));

  std::vector<std::string> vec3({"hello", "world", "C++"});
  std::string value3 = "C++";
  printf("%ld\n", count(vec3, value3));

  std::vector<const char *> vec4({"hello", "world", "C++"});
  const char *value4 = "C++";
  printf("%ld\n", count(vec4, value4));
  return 0;
}
