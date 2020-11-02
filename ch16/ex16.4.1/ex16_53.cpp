#include <iostream>
#include <string>
#include <vector>

template <typename T>
std::ostream &print(std::ostream &os, const T &t)
{
    return os << t << std::endl;
}

template <typename T, typename... Args>
std::ostream &print(std::ostream &os, const T &t, const Args &... args)
{
    os << t << ", ";
    return print(os, args...);
}

int main()
{
    int i = 10;
    float f = 3.14f;
    double d = 3.14;
    std::string s = "Hello";

    print(std::cout, i);

    print(std::cout, i, f);

    print(std::cout, i, f, d, s, "World");

    // std::vector<std::string> str_list({s, s, s});
    // print(std::cout, i, str_list); // error: no match for ‘operator<<’

    return 0;
}
