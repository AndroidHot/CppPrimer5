#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main(int argc, char const *argv[])
{
    forward_list<int> f_list{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = f_list.before_begin();
    auto current = f_list.begin();
    while (current != f_list.end())
    {
        if (*current & 0x1)
        {
            current = f_list.erase_after(prev);
        }
        else
        {
            prev = current;
            ++current;
        }
    }

    for (auto &i : f_list)
    {
        cout << i << " ";
    }

    return 0;
}
