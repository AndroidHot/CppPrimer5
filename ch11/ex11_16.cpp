#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::map;

int main(int argc, char const *argv[])
{
    map<int, bool> maps;
    maps[1024] = true;
    cout << maps[1024] << endl;

    map<int, bool>::iterator it = maps.begin();
    it->second = false;
    cout << maps[1024] << endl;

    return 0;
}
