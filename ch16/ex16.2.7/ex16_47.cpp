#include <utility>
#include <iostream>

template <typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2)
{
    f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2)
{
    f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void foo(int &&i, int &j)
{
    std::cout << i << " " << j << std::endl;
}

int main()
{
    int i = 4;
    // flip(foo, i, 42); // error: cannot bind rvalue reference of type ‘int&&’ to lvalue of type ‘int’
    flip2(foo, i, 42);
}