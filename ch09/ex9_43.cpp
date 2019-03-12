#include <string>
#include <iostream>

using std::string;

void replace_with(string &s, string const &oldVal, string const &newVal)
{
    for (auto it = s.begin(); it <= s.end() - oldVal.size();)
    {
        if (oldVal == string(it, it + oldVal.size()))
        {
            it = s.erase(it, it + oldVal.size());
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        }
        else
        {
            ++it;
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
