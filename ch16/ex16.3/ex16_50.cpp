#include <iostream>

template <typename T>
void f(T)
{
    printf("1\n");
}

template <typename T>
void f(const T *)
{
    printf("2\n");
}

template <typename T>
void g(T)
{
    printf("3\n");
}

template <typename T>
void g(T *)
{
    printf("4\n");
}

int main()
{
    int i = 42, *p = &i;
    const int ci = 0, *p2 = &ci;

    g(42);
    g(p);
    g(ci);
    g(p2);

    f(42);
    f(p);
    f(ci);
    f(p2);

    return 0;
}