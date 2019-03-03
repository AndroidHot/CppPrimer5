#include <iostream>
#include <forward_list>

using std::cout;
using std::forward_list;

void remove_evens_and_double_odds(forward_list<int> &numbers)
{
    auto prev = numbers.before_begin();
    auto current = numbers.begin();
    while (current != numbers.end())
    {
        if (*current & 0x1)
        {
            current = numbers.insert_after(prev, *current);
            prev = ++current;
            ++current;
        }
        else
        {
            current = numbers.erase_after(prev);
        }
    }
}

int main(int argc, char const *argv[])
{
    forward_list<int> numbers{0, 1, 2, 3, 4, 5};
    remove_evens_and_double_odds(numbers);

    for (auto &i : numbers)
        cout << i << " ";

    return 0;
}
