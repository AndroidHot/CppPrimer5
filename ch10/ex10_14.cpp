#include <iostream>

int main(int argc, char const *argv[])
{
    auto sum = [](int a, int b) { return a + b; };
    std::cout << sum(2, 4) << std::endl;
    return 0;
}
