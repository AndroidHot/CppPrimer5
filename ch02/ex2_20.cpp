#include <iostream>

int main() {
    int i = 20;
    int *p = &i;
    *p = *p * *p;
    std::cout << *p << std::endl;
    std::cout << i << std::endl;
}
