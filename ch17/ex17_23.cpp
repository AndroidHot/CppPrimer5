#include <iostream>
#include <regex>
#include <string>

int main(int argc, char const* argv[]) {
  std::string code = "(\\d{5})(-)?(\\d{4})?";
  std::regex r(code);
  std::string s;
  std::smatch m;
  while (getline(std::cin, s)) {
    if (std::regex_match(s, m, r)) {
      std::cout << "match: " << m.str() << std::endl;
    } else {
      std::cout << "not match" << std::endl;
    }
  }
  return 0;
}
