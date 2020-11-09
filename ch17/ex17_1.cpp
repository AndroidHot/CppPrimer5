#include <iostream>
#include <tuple>

int main(int argc, char const *argv[])
{
    std::tuple<int, int, int> t(10, 20, 30);
    printf("tuple t: %d, %d, %d\n", std::get<0>(t), std::get<1>(t), std::get<2>(t));
    return 0;
}
