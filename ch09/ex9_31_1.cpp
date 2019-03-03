#include <iostream>
#include <list>

using std::cout;
using std::list;

void remove_evens_and_double_odds(list<int> &numbers)
{
    for (auto it = numbers.begin(); it != numbers.end();)
    {
        if (*it & 0x1)
        {
            it = numbers.insert(it, *it);
            ++(++it);
        }
        else
        {
            it = numbers.erase(it);
        }
    }
}

int main(int argc, char const *argv[])
{
    list<int> numbers{0, 1, 2, 3, 4, 5};
    remove_evens_and_double_odds(numbers);

    for (auto &i : numbers)
        cout << i << " ";

    return 0;
}
