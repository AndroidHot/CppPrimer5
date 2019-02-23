#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> list(10, 42);
    for (auto it = list.begin(); it != list.end(); ++it) {
        *it *= 2;
    }

    for (auto l : list) {
        cout << l << " ";
    }
    return 0;
}
