#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include <string>
#include "../ex15.2.1/quote.h"

class LimitQuote : public Quote
{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;

public:
    LimitQuote() = default;
    LimitQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : Quote(bookNo, price), min_qty(qty), discount(disc) {}
    virtual double net_price(std::size_t n) const
    {
        if (n <= min_qty)
        {
            return n * (1 - discount) * price;
        }
        return price * n;
    }
    ~LimitQuote() = default;
};

#endif
