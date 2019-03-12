#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::string;
using std::list;

int main(int argc, char const *argv[])
{
    list<string> values{"Hello", "Hello", "World", "C++", "CPP", "CPP"};
    string value("CPP");
    std::cout << std::count(values.cbegin(), values.cend(), value) << std::endl;
    return 0;
}
