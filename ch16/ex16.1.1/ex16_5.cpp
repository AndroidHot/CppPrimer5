#include <iostream>
#include <string>

template <typename T, unsigned N>
void print(T (&arr)[N])
{
    std::cout << "=== start ===" << std::endl;
    for (auto elem : arr)
    {
        std::cout << elem << std::endl;
    }
    std::cout << "=== end ===" << std::endl;
}

int main()
{
    int a[3] = {1, 2, 3};
    double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string c[2] = {"Apple", "C++"};
    print(a);
    print(b);
    print(c);
}