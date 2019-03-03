#include <iostream>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::list;

int main(int argc, char const *argv[])
{
    list<int> src{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> even_deque;
    deque<int> odd_deque;

    for (auto i : src)
    {
        (i & 0x1 ? odd_deque : even_deque).push_back(i);
    }

    cout << "even_deque element:" << endl;
    for (auto i : even_deque) cout << i << " ";

    cout << endl << "odd_deque element:" << endl;
    for (auto i : odd_deque) cout << i << " ";

    return 0;
}
