#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    std::vector<char> chars{'h', 'e', 'l', 'l', 'o'};
    std::string str(chars.cbegin(), chars.cend());
    std::cout << str << std::endl;
    return 0;
}
