#include <vector>
#include <iostream>

using std::vector;

bool func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    while(begin != end){
        if (*begin == value) return true;
        ++begin;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> vec{1, 3, 5, 7, 9};
    std::cout << func(vec.begin(), vec.end(), 5) << std::endl;
    return 0;
}
