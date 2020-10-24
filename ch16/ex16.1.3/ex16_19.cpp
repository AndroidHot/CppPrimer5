#include <iostream>
#include <vector>

template <typename T>
void print(const T &t)
{
    typename T::size_type i;
    for (i = 0; i != t.size(); ++i)
    {
        std::cout << t[i] << std::endl;
    }
}

int main()
{
    std::vector<int> numbers({1, 2, 3, 4});
    print(numbers);

    std::vector<float> prices({1.1, 2.2, 3.3, 4.4});
    print(prices);
}
