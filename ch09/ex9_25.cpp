#include <iostream>
#include <list>

using std::list;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    list<int> values{1, 2, 3, 4};

    values.erase(values.begin(), values.begin()); // if elem1 and elem2 are equal, nothing happened.
    values.erase(values.end(), values.end()); // if elem1 and elem2 are equal, nothing happened.
    values.erase(++values.begin(), values.end()); // if elem2 is the off-the-end iterator, it would delete from elem1 to the end.

    for (auto i : values)
    {
        cout << i << " ";
    }

    return 0;
}
