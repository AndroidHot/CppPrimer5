#include "quote.h"
#include "bulk_quote.h"
#include "basket.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Basket basket;
    Quote item1("#1984", 18.8);
    BulkQuote item2("#1Q84", 18.8, 11, 0.5);

    for (int i = 0; i < 50; ++i)
    {
        basket.add_item(item1);
        basket.add_item(item2);
    }

    basket.total_receipt(std::cout);

    Basket basket2;

    for (int i = 0; i < 50; ++i)
    {
        basket2.add_item(std::move(item1));
        basket2.add_item(std::move(item2));
    }

    basket2.total_receipt(std::cout);

    return 0;
}
