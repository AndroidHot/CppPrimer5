#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>

class Quote
{
    friend bool operator!=(const Quote &lhs, const Quote &rhs);

private:
    std::string bookNo;

protected:
    double price = 0.0;

public:
    Quote()
    {
        std::cout << "Quote constructing\n";
    }

    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price)
    {
        std::cout << "Quote constructing\n";
    }

    Quote(const Quote &q) : bookNo(q.bookNo), price(q.price)
    {
        std::cout << "Quote: copy constructing\n";
    }

    Quote(Quote &&q) noexcept : bookNo(std::move(q.bookNo)), price(std::move(q.price))
    {
        std::cout << "Quote: move constructing\n";
    }

    Quote &operator=(const Quote &rhs)
    {
        if (*this != rhs)
        {
            std::cout << "Quote: copy =() in \n";

            bookNo = rhs.bookNo;
            price = rhs.price;
        }
        std::cout << "Quote: copy =() end \n";

        return *this;
    }

    Quote &operator=(Quote &&rhs) noexcept
    {
        if (*this != rhs)
        {
            std::cout << "Quote: move =() in \n";

            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }
        std::cout << "Quote: move =() end \n";

        return *this;
    }

    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return price * n; }
    virtual void debug() const { printf("bookNo: %s, price: %f\n", bookNo.c_str(), price); }
    virtual ~Quote()
    {
        std::cout << "Quote destructing\n";
    }
};

bool inline
operator!=(const Quote &lhs, const Quote &rhs)
{
    return true;
}

#endif
