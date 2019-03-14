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

bool is_shorter(const string &str1, const string &str2)
{
    return str1.size() < str2.size();
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
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elim_dups(vec);
    std::stable_sort(vec.begin(), vec.end(), is_shorter);
    print_vector(vec);

    return 0;
}
