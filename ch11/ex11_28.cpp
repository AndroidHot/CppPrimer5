#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::map;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    map<string, vector<int>> maps;
    maps["c++"] = {1, 2, 3};
    map<string, vector<int>>::iterator iter = maps.find("c++");
    std::cout << iter->first << std::endl;
    iter = maps.find("java");
    std::cout << (iter == maps.end()) << std::endl;
    return 0;
}

