#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "quote.h"

class BulkQuote : public Quote
{
    friend bool operator!=(const Quote &lhs, const Quote &rhs);

private:
    std::size_t min_qty = 0;
    double discount = 0.0;

public:
    BulkQuote() = default;
    BulkQuote(const std::string &bookNo, double price,
              std::size_t qty, double disc) : Quote(bookNo, price), min_qty(qty), discount(disc) {}

    BulkQuote(const BulkQuote &q) : Quote(q), min_qty(q.min_qty), discount(q.discount)
    {
        std::cout << "BulkQuote: copy constructing\n";
    }

    BulkQuote(BulkQuote &&q) noexcept : Quote(std::move(q)), min_qty(std::move(q.min_qty)), discount(std::move(q.discount))
    {
        std::cout << "BulkQuote: move constructing\n";
    }

    BulkQuote &operator=(const BulkQuote &rhs)
    {
        if (*this != rhs)
        {
            std::cout << "BulkQuote: copy =() in \n";
            Quote::operator=(rhs);
            min_qty = rhs.min_qty;
            discount = rhs.discount;
        }
        std::cout << "BulkQuote: copy =() \n";

        return *this;
    }

    BulkQuote &operator=(BulkQuote &&rhs) noexcept
    {
        if (*this != rhs)
        {
            std::cout << "BulkQuote: move =() in \n";

            Quote::operator=(std::move(rhs));
            min_qty = std::move(rhs.min_qty);
            discount = std::move(rhs.discount);
        }
        std::cout << "BulkQuote: move =() \n";

        return *this;
    }

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
               isbn().c_str(), price, (int)min_qty, discount);
    }
    ~BulkQuote() = default;
};

#endif
