#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include <string>
#include "disc_quote.h"

class LimitQuote : public DiscQuote
{
public:
    LimitQuote() = default;
    LimitQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : DiscQuote(bookNo, price, qty, disc) {}
    double net_price(std::size_t n) const override
    {
        if (n <= quantity)
        {
            return n * (1 - discount) * price;
        }
        return price * (n - quantity) + quantity * (1 - discount) * price;
    }
    ~LimitQuote() = default;
};

#endif
