#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::for_each;
using std::map;
using std::string;
using std::vector;
using Families = map<string, vector<string>>;

void add_family(Families &families, string fn, string cn)
{
    families[fn].push_back(cn);
}

void print(Families const &families)
{
    for (auto const &family : families)
    {
        cout << family.first << ":\n";
        for (auto const &child : family.second)
            cout << child << " ";
        cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    Families families;

    string family_A = "A";
    vector<string> child_A{"a", "a", "a"};

    string family_B = "B";
    vector<string> child_B{"b", "b", "b"};

    vector<string> other_child_A{"aa", "aa"};

    for_each(child_A.begin(), child_A.end(), [&families, family_A](const string &cn) {
        add_family(families, family_A, cn);
    });

    for_each(child_B.begin(), child_B.end(), [&families, family_B](const string &cn) {
        add_family(families, family_B, cn);
    });

    for_each(other_child_A.begin(), other_child_A.end(), [&families, family_A](const string &cn) {
        add_family(families, family_A, cn);
    });

    print(families);

    return 0;
}
