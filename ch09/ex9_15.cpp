#include <vector>
#include <iostream>

using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> vec1{1, 3, 5, 7, 9};
    vector<int> vec2{1, 3, 5, 7, 9};
    vector<int> vec3{1, 3, 5, 7};

    std::cout << (vec1 == vec2 ? "true" : "false") << std::endl;
    std::cout << (vec1 == vec3 ? "true" : "false") << std::endl;

    return 0;
}
