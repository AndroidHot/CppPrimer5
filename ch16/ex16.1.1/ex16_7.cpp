#include <iostream>

template <typename T, size_t N>
constexpr size_t len(T (&arr)[N])
{
    return N;
}

int main()
{
    double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string c[2] = {"Apple", "C++"};
    std::string d[len(c)] = {"Google", "Go"};
    printf("b length is: %lu\n", len(b));
    printf("c length is: %lu\n", len(c));
    printf("d length is: %lu\n", len(d));
}