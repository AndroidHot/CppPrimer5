#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<string> words{"hello", "world", "c++", "awesome"};
    int size = std::count_if(words.begin(), words.end(),
                             [](const string &s) { return s.size() > 6; });

    std::cout << size << std::endl;
    return 0;
}
