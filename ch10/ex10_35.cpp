#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{0, 1, 2, 3, 4, 5, 6};
    std::for_each(vec.cbegin(), vec.cend(), [](const int &i) { std::cout << i << " "; });
    return 0;
}

