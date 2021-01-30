#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[]) {
  std::vector<std::string> str_vec({"Apple", "Google", "", "C++", "Tesla", ""});

  std::function<bool(std::string &)> StrEmpty = &std::string::empty;
  int empty_str_size = std::count_if(str_vec.begin(), str_vec.end(), StrEmpty);
  printf("empty str size: %d\n", empty_str_size);

  empty_str_size = std::count_if(str_vec.begin(), str_vec.end(),
                                 std::mem_fn(&std::string::empty));
  printf("empty str size: %d\n", empty_str_size);

  empty_str_size =
      std::count_if(str_vec.begin(), str_vec.end(),
                    std::bind(&std::string::empty, std::placeholders::_1));
  printf("empty str size: %d\n", empty_str_size);

  return 0;
}
