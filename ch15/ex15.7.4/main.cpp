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
    debug(item1);

    BulkQuote item2("#1Q84", 28.8, 11, 0.5);
    debug(item2);

    BulkQuote item3("#1QQ84", 38.8);
    debug(item3);

    return 0;
}
