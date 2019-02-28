#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

void func(const string &file_name, vector<string> &vec)
{
    ifstream input(file_name);
    if (input)
    {
        string buf;
        while (std::getline(input, buf))
            vec.push_back(buf);
    }
    for (const auto &item : vec)
    {
        istringstream record(item);
        string word;
        while (record >> word)
        {
            std::cout << word << std::endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<string> vec;
    func("../res/phonebook.txt", vec);
    return 0;
}
