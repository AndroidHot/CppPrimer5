#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::list<int> numbers{0, 1, 2, 3, 0, 1, 0, 2, 3};
    auto iter = std::find(numbers.crbegin(), numbers.crend(), 0);
    std::cout << "last 0 index: " << std::distance(iter, numbers.crend()) << std::endl;
    return 0;
}

