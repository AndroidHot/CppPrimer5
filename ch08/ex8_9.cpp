#include <iostream>
#include <string>
#include <sstream>

using std::istream;
using std::string;
using std::istringstream;

istream& func(istream& is)
{
    string input;
    while(is >> input){
        std::cout << input << std::endl;
    }
    is.clear();
    return is;
}

int main()
{
    istringstream record("Hello world");
    istream& is = func(record);
    return 0;
}
