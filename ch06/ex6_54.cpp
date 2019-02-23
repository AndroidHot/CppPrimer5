#include <iostream>
#include <vector>

int sum(int a, int b);

int minus(int a, int b);

int multiply(int a, int b);

int division(int a, int b);

int sum(int a, int b) {
    return a + b;
};

int minus(int a, int b) {
    return a - b;
};

int multiply(int a, int b) {
    return a * b;
};

int division(int a, int b) {
    return a / b;
};

typedef decltype(sum) *Func;

std::vector<Func> funcs = {sum, minus, multiply, division};

int main() {
    for (auto func : funcs) {
        int a = 4, b = 4;
        std::cout << func(a, b) << std::endl;
    }
    return 0;
}
