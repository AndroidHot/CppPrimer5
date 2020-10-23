#include <iostream>

template <typename T, size_t N>
T *begin_(T (&arr)[N])
{
    return arr;
}

template <typename T, size_t N>
T *end_(T (&arr)[N])
{
    return arr + N;
}

int main()
{
    double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string c[2] = {"Apple", "C++"};
    printf("begin(b) is: %g, before end(b) is: %g.\n", *begin_(b), *(end_(b) - 1));
    printf("begin(c) is: %s, before end(c) is: %s.\n", (*begin_(c)).c_str(), (*(end_(c) - 1)).c_str());
}