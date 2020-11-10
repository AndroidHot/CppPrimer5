#include <regex>
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::regex reg("[[:alpha:]]*[^c]ei[[:alpha:]]*");
    std::string word;
    std::cout << "Input a word to test, Input 'q' to quit." << std::endl;
    while (std::cin >> word && word != "q")
    {
        if (std::regex_search(word, reg))
        {
            std::cout << "match!" << std::endl;
        }
        else
        {
            std::cout << "not match!" << std::endl;
        }
        std::cout << "Input a word to test, Input 'q' to quit." << std::endl;
    }
    return 0;
}
