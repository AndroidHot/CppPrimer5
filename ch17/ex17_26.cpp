#include <iostream>
#include <regex>

int main(int argc, char const *argv[]) {
  std::string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
  std::string format = "$2.$5.$7";
  std::regex r(phone);
  std::string input;
  std::cout << "Input phone number:" << std::endl;
  getline(std::cin, input);

  bool is_first_number = true;
  for (std::sregex_iterator it(input.begin(), input.end(), r), end_it;
       it != end_it; ++it) {
    if (is_first_number) {
      is_first_number = false;
    } else {
      std::cout << it->format(format) << std::endl;
    }
  }

  return 0;
}
