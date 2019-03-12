#include <string>
#include <iostream>

using std::string;

void replace_with(string &s, string const &oldVal, string const &newVal)
{
    for (auto i = 0; i <= s.size() - oldVal.size();)
    {
        if (s[i] == oldVal[0] && oldVal == s.substr(i, oldVal.size()))
        {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size();
        }
        else
        {
            ++i;
        }
    }
}

int main(int argc, char const *argv[])
{
    string s{"To drive straight thru is a foolish, tho courageous act."};
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    std::cout << s << std::endl;
    return 0;
}
