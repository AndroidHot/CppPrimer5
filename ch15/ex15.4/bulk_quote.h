#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "disc_quote.h"

class BulkQuote : public DiscQuote
{
public:
    BulkQuote() = default;
    BulkQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : DiscQuote(bookNo, price, qty, disc) {}
    double net_price(std::size_t n) const override
    {
        if (n >= quantity)
        {
            return n * (1 - discount) * price;
        }
        return price * n;
    }
    ~BulkQuote() = default;
};

#endif
