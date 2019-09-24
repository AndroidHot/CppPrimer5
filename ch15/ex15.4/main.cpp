#include "quote.h"
#include "disc_quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"
#include <iostream>

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

int main(int argc, char const *argv[])
{
    Quote item("#1Q84", 18.8);
    print_total(std::cout, item, 10);
    print_total(std::cout, item, 20);

    BulkQuote item2("#1984", 18.8, 11, 0.5);
    print_total(std::cout, item2, 10);
    print_total(std::cout, item2, 20);

    LimitQuote item3("#1984", 18.8, 11, 0.5);
    print_total(std::cout, item3, 10);
    print_total(std::cout, item3, 20);

    // error: variable type 'DiscQuote' is an abstract class
    // DiscQuote item3("#2019", 18.8, 11, 0.5);

    return 0;
}
