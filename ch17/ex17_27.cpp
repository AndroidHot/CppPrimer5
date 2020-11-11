#include <iostream>
#include <regex>
#include <string>

int main(int argc, char const* argv[]) {
  std::string code = "(\\d{5})(-)?(\\d{4})?";
  std::string format = "$1-$3";
  std::regex r(code);
  std::string s;
  std::smatch m;
  while (getline(std::cin, s)) {
    if (std::regex_match(s, m, r)) {
      std::cout << "match" << std::endl;
      if (!m[2].matched && m[3].matched) {
        std::cout << "foramt" << std::endl;
        std::cout << m.format(format) << std::endl;
      }
    } else {
      std::cout << "not code" << std::endl;
    }
  }
  return 0;
}
