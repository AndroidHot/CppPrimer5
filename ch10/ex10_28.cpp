#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using std::list;
using std::vector;

void print_list(list<int> &values)
{
    for (auto &v : values)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    vector<int> in{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> out1;
    list<int> out2;
    list<int> out3;

    std::copy(in.cbegin(), in.cend(), std::inserter(out1, out1.begin()));
    print_list(out1);

    std::copy(in.cbegin(), in.cend(), std::back_inserter(out2));
    print_list(out2);

    std::copy(in.cbegin(), in.cend(), std::front_inserter(out3));
    print_list(out3);
    return 0;
}
