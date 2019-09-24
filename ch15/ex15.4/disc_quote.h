#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include <string>
#include "quote.h"

class DiscQuote : public Quote
{
protected:
    std::size_t quantity = 0;
    double discount = 0.0;

public:
    DiscQuote() = default;
    DiscQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : Quote(bookNo, price), quantity(qty), discount(disc) {}
    virtual double net_price(std::size_t n) const = 0;
    virtual ~DiscQuote() = default;
};

#endif
