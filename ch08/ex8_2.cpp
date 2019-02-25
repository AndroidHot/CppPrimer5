#include <iostream>
#include <string>

using std::istream;
using std::string;

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
    istream& is = func(std::cin);
    std::cout << is.rdstate() << std::endl;
    return 0;
}


