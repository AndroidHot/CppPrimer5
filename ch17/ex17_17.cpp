#include <iostream>
#include <regex>
#include <string>

int main(int argc, char const *argv[]) {
  std::regex reg("[[:alpha:]]*[^c]ei[[:alpha:]]*");
  std::string word;
  std::cout << "Input a sentence to test, Input 'q' to quit." << std::endl;
  if (getline(std::cin, word)) {
    for (std::sregex_iterator it(word.begin(), word.end(), reg), end_it;
         it != end_it; ++it) {
      std::cout << it->str() << std::endl;
    }
  }
  return 0;
}
