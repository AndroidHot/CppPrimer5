#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::vector;

void print_vector(vector<string> &vec)
{
    for (auto &v : vec)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

void elim_dups(vector<string> &vec)
{
    print_vector(vec);

    std::sort(vec.begin(), vec.end());
    print_vector(vec);

    auto end_unique = std::unique(vec.begin(), vec.end());
    print_vector(vec);

    vec.erase(end_unique, vec.end());
    print_vector(vec);
}

int main(int argc, char const *argv[])
{
    vector<string> vec{"Hello", "World", "Hello", "C++", "Hello", "CPP", "CPP"};
    elim_dups(vec);
    return 0;
}
