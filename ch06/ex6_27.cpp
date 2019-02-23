#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> list) {
    int result = 0;
    for (const auto &v : list) {
        result += v;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout << sum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) << endl;
    return 0;
}

