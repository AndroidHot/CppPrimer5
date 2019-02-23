#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string result = "";
    for(int i = 0; i != argc; i++)
    {
        result += string(argv[i]) + " ";
    }
    cout << result << endl;
    return 0;
}

