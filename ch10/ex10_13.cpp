#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::vector;

bool partition_func(const string &word)
{
    return word.size() >= 5;
}

int main(int argc, char const *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    auto iter_end = std::partition(words.begin(), words.end(), partition_func);
    for (auto iter = words.cbegin(); iter != iter_end; ++iter)
    {
        std::cout << *iter << std::endl;
    }

    return 0;
}
