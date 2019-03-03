#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main(int argc, char const *argv[])
{
    string buffer;
    list<string> input;
    while (cin >> buffer)
    {
        input.push_back(buffer);
    }

    for(auto iter = input.cbegin(); iter != input.cend(); ++iter)
    {
        cout << *iter << endl;
    }

    return 0;
}
