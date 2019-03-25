#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::remove_if;
using std::string;
using std::tolower;

const string &strip(string &str)
{
    for (auto &c : str)
        c = tolower(c);
    str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
    return str;
}

int main(int argc, char const *argv[])
{
    map<string, int> word_count;
    string word;
    while (cin >> word)
    {
        ++word_count[strip(word)];
    }

    for (auto iter = word_count.cbegin(); iter != word_count.cend(); ++iter)
    {
        cout << iter->first << " appear " << iter->second
             << (iter->second > 1 ? " times" : " time") << endl;
    }

    return 0;
}
