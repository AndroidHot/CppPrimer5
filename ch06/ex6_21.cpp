#include <iostream>

using std::cout;
using std::endl;

int compare(const int i, const int* const j) {
    return i > *j ? i : *j;
}

int main() {
    int i = 1000;
    int j = 100;
    int result = compare(i, &j);
    cout << "result: " << result <<endl;
    return 1;
}
