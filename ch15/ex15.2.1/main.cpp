#include "quote.h"
#include <iostream>


double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

int main(int argc, char const *argv[])
{
    Quote item("#1984", 18.8);
    print_total(std::cout, item, 10);
    return 0;
}
