#include <vector>
#include <list>
#include <iostream>

using std::list;
using std::vector;

int main(int argc, char const *argv[])
{
    list<int> li{1, 3, 5, 7, 9};
    vector<int> vec2{1, 3, 5, 7, 9};
    vector<int> vec3{1, 3, 5, 7};

    std::cout << (vector<int>(li.begin(), li.end()) == vec2 ? "true" : "false") << std::endl;
    std::cout << (vector<int>(li.begin(), li.end()) == vec3 ? "true" : "false") << std::endl;

    return 0;
}
