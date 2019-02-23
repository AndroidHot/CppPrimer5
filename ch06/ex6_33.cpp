#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using Iter = vector<int>::iterator;

void printVector(Iter start, Iter last) {
    if (start != last) {
        cout << *start++ << endl;
        printVector(start, last);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printVector(list.begin(), list.end());
    return 0;
}

