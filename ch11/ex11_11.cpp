#include <set>
#include "../ch07/ex7_26.h"

using std::multiset;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

using func = bool (*)(const Sales_data &lhs, const Sales_data &rhs);

int main(int argc, char const *argv[])
{
    multiset<Sales_data, func> bookstore(compareIsbn);
    return 0;
}
