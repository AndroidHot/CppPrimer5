#include <iostream>
#include <regex>

int main(int argc, char const *argv[]) {
  std::string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
  std::string format = "$2.$5.$7";
  std::regex r(phone);
  std::string input;
  std::cout << "Input phone number:" << std::endl;
  getline(std::cin, input);
  std::cout << std::regex_replace(input, r, format) << std::endl;
  return 0;
}
