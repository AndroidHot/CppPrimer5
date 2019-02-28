#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::cin;
using std::istringstream;
using std::ifstream;
using std::string;
using std::vector;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

void func(const char* file_name)
{
    ifstream is(file_name);
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(is, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (auto &p : people)
    {
        std::cout << p.name << " ";
        for (auto &s : p.phones)
            std::cout << s << " ";
        std::cout << std::endl;
    }
}

int main()
{
    func("../res/phonebook.txt");
    return 0;
}
