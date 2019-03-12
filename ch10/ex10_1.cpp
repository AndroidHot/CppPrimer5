#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> vec{1, 2, 2, 2, 3, 3, 4, 5};
    int value = 2;
    std::cout << std::count(vec.cbegin(), vec.cend(), value) << std::endl;
    return 0;
}
