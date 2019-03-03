#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void find_and_insert(forward_list<string> &list, string to_find, string to_add)
{
    auto prev = list.before_begin();
    auto current = list.begin();
    while (current != list.end())
    {
        if (*current == to_find)
        {
            list.insert_after(prev, to_add);
            return;
        }
        else
        {
            prev = current;
            ++current;
        }
    }
    list.insert_after(prev, to_add);
}

int main(int argc, char const *argv[])
{
    forward_list<string> list1{"Hello", "C++", "Java", "JavaScript", "Python"};
    find_and_insert(list1, "C++", "C");

    forward_list<string> list2{"Hello", "C++", "Java", "JavaScript", "Python"};
    find_and_insert(list2, "C", "C");

    for (auto &i : list1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto &i : list2)
    {
        cout << i << " ";
    }

    return 0;
}
