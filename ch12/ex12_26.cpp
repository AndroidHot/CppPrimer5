#include <memory>
#include <iostream>
#include <string>

using std::allocator;
using std::cin;
using std::cout;
using std::string;

int main(int argc, char const *argv[])
{
    unsigned const int max_size = 5;
    allocator<string> alloc;
    auto const p = alloc.allocate(max_size);

    auto q = p;
    string str;
    while (q != p + max_size && cin >> str)
    {
        alloc.construct(q++, str);
    }

    while (q != p)
    {
        --q;
        cout << *(q) << " ";
        alloc.destroy(q);
    }

    alloc.deallocate(p, max_size);

    return 0;
}

