#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "quote.h"

class BulkQuote : public Quote
{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;

public:
    BulkQuote() = default;
    BulkQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : Quote(bookNo, price), min_qty(qty), discount(disc) {}
    double net_price(std::size_t n) const override
    {
        if (n >= min_qty)
        {
            return n * (1 - discount) * price;
        }
        return price * n;
    }
    void debug() const override
    {
        printf("bookNo: %s, price: %f, min_qty: %d, discount: %f\n",
                isbn().c_str(), price, (int) min_qty, discount);
    }
    ~BulkQuote() = default;
};

#endif
