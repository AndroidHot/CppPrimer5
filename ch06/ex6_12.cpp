#include <iostream>

using std::cout;
using std::endl;

void exchangeValue(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    int i = 0;
    int j = 1;
    exchangeValue(i, j);
    cout << "i: " << i << " j: " << j << endl;
    return 1;
}
