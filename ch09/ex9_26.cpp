#include <vector>
#include <list>
#include <iostream>

using std::end;
using std::list;
using std::vector;
using std::cout;

int main(int argc, char const *argv[])
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

    // init
    list<int> li(ia, end(ia));
    vector<int> vec(ia, end(ia));

    // remove odd value
    for (auto iter = li.cbegin(); iter != li.end();)
    {
        if (*iter & 0x1)
        {
            iter = li.erase(iter);
        }
        else
        {
            ++iter;
        }
    }

    // remove even value
    for (auto iter = vec.cbegin(); iter != vec.end();)
    {
        if (*iter % 2 == 0)
        {
            iter = vec.erase(iter);
        }
        else
        {
            ++iter;
        }
    }

    cout << "list : ";
    for(auto i : li)   cout << i << " ";
    cout << "\nvector : ";
    for(auto i : vec)   cout << i << " ";
    cout << std::endl;

    return 0;
}
