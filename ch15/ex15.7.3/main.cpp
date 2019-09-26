#include "bulk_quote.h"
#include "quote.h"
#include <iostream>

void debug(const Quote &item)
{
    item.debug();
}

int main(int argc, char const *argv[])
{
    Quote item1("#1984", 18.8);
    Quote item2 = item1;
    Quote item3 = std::move(item1);
    Quote item4;
    item4 = item1;
    item4 = std::move(item1);

    printf("\n");

    BulkQuote item5("#1Q84", 28.8, 11, 0.5);
    BulkQuote item6 = item5;
    BulkQuote item7 = std::move(item5);
    BulkQuote item8;
    item8 = item5;
    item8 = std::move(item5);

    return 0;
}
