#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::string;
using std::vector;
using namespace std::placeholders;

bool is_lesser_than_or_equal_to6(const string &str, int sz)
{
    return str.size() <= sz;
}

int main(int argc, char const *argv[])
{
    vector<string> words{"hello", "world", "c++", "awesome"};
    int size = std::count_if(words.begin(), words.end(),
                             std::bind(is_lesser_than_or_equal_to6, _1, 6));

    std::cout << size << std::endl;
    return 0;
}
