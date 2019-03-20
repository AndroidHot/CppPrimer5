#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> numbers;
    std::copy(vec.crbegin() + 3, vec.crbegin() + 8, std::back_inserter(numbers));
    std::for_each(numbers.cbegin(), numbers.cend(), [](const int &i) { std::cout << i << " "; });
    return 0;
}

