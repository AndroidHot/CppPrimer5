#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::find;
using std::for_each;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<string> unique_word;
    string word;
    while (cin >> word)
    {
        if (find(unique_word.begin(), unique_word.end(), word) == unique_word.end())
        {
            unique_word.push_back(word);
        }
    }

    for_each(unique_word.begin(), unique_word.end(), [](const string &word) {
        cout << word << " ";
    });
    return 0;
}
