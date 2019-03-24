#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using std::list;
using std::string;

void print_vector(list<string> &words)
{
    for (auto &v : words)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    list<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    words.sort();
    words.unique();
    print_vector(words);
    return 0;
}
