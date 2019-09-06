#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "../ex15.2.1/quote.h"

class BulkQuote : public Quote
{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;

public:
    BulkQuote() = default;
    BulkQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : Quote(bookNo, price), min_qty(qty), discount(disc) {}
    virtual double net_price(std::size_t n) const
    {
        if (n >= min_qty)
        {
            return n * (1 - discount) * price;
        }
        return price * n;
    }
    ~BulkQuote() = default;
};

#endif
