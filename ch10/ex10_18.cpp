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
    std::sort(vec.begin(), vec.end());
    auto end_unique = std::unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elim_dups(words);
    std::stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = std::partition(words.begin(), words.end(), [sz](const string &str) { return str.size() < sz; });
    std::for_each(wc, words.end(), [](const string &str) { std::cout << str << " "; });
}

int main(int argc, char const *argv[])
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(words, 5);
    return 0;
}
