#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using std::ifstream;
using std::string;
using std::vector;

void func(const string &file_name, vector<string> &vec)
{
    ifstream input(file_name);
    if (input)
    {
        string buf;
        while (input >> buf)
        {
            vec.push_back(buf);
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<string> vec;
    func("../res/book.txt", vec);
    for (const auto &str : vec)
    {
        std::cout << str << std::endl;
    }
    return 0;
}
