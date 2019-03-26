#include <vector>
#include <utility>
#include <string>
#include <iostream>

using std::cin;
using std::pair;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    string s;
    int i;
    vector<pair<string, int>> vec;
    while (cin >> s >> i)
    {
        vec.push_back({s, i});
        vec.push_back(std::make_pair(s, i));
        vec.push_back(pair<string, int>{s, i});
        vec.emplace_back(s, i); // i like this way.
    }

    for (const auto &p : vec)
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    return 0;
}
