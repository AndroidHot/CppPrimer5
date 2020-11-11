#include <iostream>
#include <regex>
#include <string>

bool valid(const std::smatch& m) {
  if (m[1].matched) {
    return m[3].matched;
  } else {
    return !m[3].matched;
  }
}

int main(int argc, char const* argv[]) {
  std::string phone =
      "(\\()?(\\d{3})(\\))?([-.]| *)?(\\d{3})([-.]| *)?(\\d{4})";
  std::regex r(phone);
  std::string s;
  while (getline(std::cin, s)) {
    for (std::sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it;
         ++it) {
      if (valid(*it)) {
        std::cout << "valid: " << it->str() << std::endl;
      } else {
        std::cout << "not valid: " << it->str() << std::endl;
      }
    }
  }
  return 0;
}
