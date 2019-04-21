#include "ex13_31.h"
#include <vector>
#include <algorithm>

using std::sort;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<HasPtr> vec{HasPtr("a"), HasPtr("d"), HasPtr("c"), HasPtr("b")};
    sort(vec.begin(), vec.end());
    return 0;
}
