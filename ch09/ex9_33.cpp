#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> vec{0, 1, 2, 3, 4, 5};
    auto it = vec.begin();
    while (it != vec.end())
    {
        ++it;
        /* it = */ vec.insert(it, 42);
        ++it;
    }

    for (auto &i : vec)
        cout << i << " ";

    return 0;
}
