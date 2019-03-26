#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::for_each;
using std::map;
using std::pair;
using std::string;
using std::vector;
using Families = map<string, vector<pair<string, string>>>;

void add_family(Families &families, string fn, string cn, string cb)
{
    families[fn].emplace_back(cn, cb);
}

void print(Families const &families)
{
    for (auto const &family : families)
    {
        cout << family.first << ":" << endl;
        for (auto const &child : family.second)
            cout << "child name: " << child.first << ", child birthday " << child.second << endl;
    }
}

int main(int argc, char const *argv[])
{
    Families families;

    string family_A = "A";
    string child_A = "a";
    string child_A_birthday = "2019/3/1";
    add_family(families, family_A, child_A, child_A_birthday);

    string family_B = "B";
    string child_B = "b";
    string child_B_birthday = "2019/3/2";
    add_family(families, family_B, child_B, child_B_birthday);

    string other_child_A = "aa";
    string other_child_A_birthday = "2019/3/3";
    add_family(families, family_A, other_child_A, other_child_A_birthday);

    print(families);

    return 0;
}
