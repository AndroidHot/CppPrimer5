#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<int> list;
    for (int input; cin >> input; list.push_back(input));
    return 1;
}
