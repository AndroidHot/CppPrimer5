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
    vector<int> in{1, 1, 2, 2, 3, 4, 4, 5};
    list<int> out;
    std::unique_copy(in.begin(), in.end(), std::back_inserter(out));
    print_list(out);
    return 0;
}
