#include <iostream>
#include <vector>
#include <set>

template <typename T>
void print(const T &t)
{
    for (auto it = t.begin(); it != t.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

int main()
{
    std::vector<int> numbers({1, 2, 3, 4});
    print(numbers);

    std::set<float> prices({1.1, 2.2, 3.3, 4.4});
    print(prices);
}
