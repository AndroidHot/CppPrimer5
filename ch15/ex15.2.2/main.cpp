#include "bulk_quote.h"
#include "ex15_7.h"
#include <iostream>

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

int main(int argc, char const *argv[])
{
    BulkQuote item("#1984", 18.8, 11, 0.5);
    print_total(std::cout, item, 10);
    print_total(std::cout, item, 20);

    LimitQuote item2("#1984", 18.8, 11, 0.5);
    print_total(std::cout, item2, 10);
    print_total(std::cout, item2, 20);
    return 0;
}
