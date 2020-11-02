#include <iostream>
#include <string>

template <typename T, typename... Args>
void foo(const T &t, const Args &... args)
{
    printf("sizeof...(Args): %ld, sizeof...(args): %ld. \n", sizeof...(Args), sizeof...(args));
}

int main()
{
    int i = 0;
    double d = 3.14;
    std::string s = "how now brown cow";

    foo(i, s, 42, d); // sizeof...(Args): 3, sizeof...(args): 3
    foo(s, 42, "hi"); // sizeof...(Args): 2, sizeof...(args): 2.
    foo(d, s);        // sizeof...(Args): 1, sizeof...(args): 1.
    foo("hi");        // sizeof...(Args): 0, sizeof...(args): 0.

    foo("hi", i, i); // sizeof...(Args): 2, sizeof...(args): 2.
}