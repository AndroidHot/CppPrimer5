#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main(int argc, char const *argv[])
{
    map<string, int> word_count;
    string word;
    while (cin >> word)
    {
        ++word_count[word];
    }

    for (auto iter = word_count.cbegin(); iter != word_count.cend(); ++iter)
    {
        cout << iter->first << " appear " << iter->second
             << (iter->second > 1 ? " times" : " time") << endl;
    }

    return 0;
}
