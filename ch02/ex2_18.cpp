#include <iostream>

int main() {
    int *p = 0;
    int value = 1024;
    p = &value;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = 1023;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
}
