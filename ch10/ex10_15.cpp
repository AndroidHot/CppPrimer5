#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 2;
    auto sum = [a](int b) { return a + b; };
    std::cout << sum(4) << std::endl;
    return 0;
}
