#include <iostream>
#include <vector>
#include <numeric>

using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> vec{1, 2, 2, 2, 3, 3, 4, 5};
    int initValue = 0;
    std::cout << std::accumulate(vec.cbegin(), vec.cend(), initValue) << std::endl;
    return 0;
}
