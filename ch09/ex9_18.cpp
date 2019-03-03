#include <iostream>
#include <deque>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::string;

int main(int argc, char const *argv[])
{
    string buffer;
    deque<string> input;
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
