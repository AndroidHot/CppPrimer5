#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> list(10, 42);
    cout << "Size: " << list.size() << " Content: [";
    for (auto it = list.cbegin(); it != list.cend(); ++it) {
        cout << *it << (it != list.cend() - 1 ? "," : "]");
    }
    return 0;
}
