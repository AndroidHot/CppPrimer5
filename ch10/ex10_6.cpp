#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::fill_n(vec.begin(), vec.size(), 0);

    for (auto &v : vec)
    {
        std::cout << v << " ";
    }
    return 0;
}
