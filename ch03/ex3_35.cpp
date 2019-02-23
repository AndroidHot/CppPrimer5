#include <iostream>

using std::cout;

int main() {
    const int SIZE = 6;
    int arr[6] = {1, 1, 2, 3, 4, 5};
    int *p = arr;
    while (p != (arr + SIZE)) {
        *p++ = 0;
    }
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
