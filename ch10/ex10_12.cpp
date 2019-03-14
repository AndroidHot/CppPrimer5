#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "../ch07/ex7_26.h"

using std::string;
using std::vector;

bool compareIsbn(const Sales_data &data1, const Sales_data &data2)
{
    return data1.isbn() < data2.isbn();
}

int main(int argc, char const *argv[])
{
    vector<Sales_data> books{Sales_data("978-7-121-15535-2"),
                             Sales_data("878-7-121-15535-2"),
                             Sales_data("979-7-121-15535-2"),
                             Sales_data("578-7-121-15535-2"),
                             Sales_data("978-8-121-15535-2")};
    std::sort(books.begin(), books.end(), compareIsbn);

    for (auto &book : books)
    {
        std::cout << book.isbn() << std::endl;
    }
    return 0;
}
