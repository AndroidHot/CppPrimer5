#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void printVectorCapacity(vector<int> &vec)
{
    cout << "vec size: " << vec.size() << ", vec capacity: " << vec.capacity() << endl;
}

// On my Mac, it grows in the same way as the book.
int main(int argc, char const *argv[])
{
    vector<int> vec;
    printVectorCapacity(vec);

    for (int i = 0; i < 24; ++i)
        vec.push_back(i);
    printVectorCapacity(vec);

    vec.reserve(50);
    printVectorCapacity(vec);

    for (vector<int>::size_type i = vec.size(); i < vec.capacity(); ++i)
        vec.push_back(i);
    printVectorCapacity(vec);

    vec.push_back(42);
    printVectorCapacity(vec);

    return 0;
}
