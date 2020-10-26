#include <iostream>

int main()
{
    int i = 10;
    double j = 9.9;
    printf("max is %d\n", std::max<int>(i, j));
    printf("max is %g\n", std::max<double>(i, j));
}
