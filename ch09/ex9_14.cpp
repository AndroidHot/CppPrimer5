#include <vector>
#include <list>
#include <string>
#include <iostream>

using std::list;
using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
    list<const char*> src{"Steven Paul Jobs", "Tim Cook", "Jony Ive"};
    vector<string> des{"C++"};

    des.assign(src.begin(), src.end());

    for(const string& element : des)
    {
        std::cout << element << std::endl;
    }

    return 0;
}
