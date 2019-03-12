#include <iostream>
#include <vector>
#include <numeric>

using std::vector;

int main(int argc, char const *argv[])
{
    vector<double> vec{1.1, 2, 2, 2, 3, 3, 4, 5};
    // double type will be convert to int.
    std::cout << std::accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;

    // Use should be like this.
    double initValue = 0;
    std::cout << std::accumulate(vec.cbegin(), vec.cend(), initValue) << std::endl;
    return 0;
}
