#ifndef BASKET_H
#define BASKET_H

#include <set>
#include <memory>
#include <iostream>
#include "quote.h"

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

class Basket
{
private:
    static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
    {
        return lhs->isbn() < rhs->isbn();
    }

    std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};

public:
    Basket();
    ~Basket();

    void add_item(const Quote &sale);
    void add_item(Quote &&sale);
    double total_receipt(std::ostream &os);
};

Basket::Basket()
{
}

Basket::~Basket()
{
}

void Basket::add_item(const Quote &sale)
{
    items.insert(std::shared_ptr<Quote>(sale.clone()));
}

void Basket::add_item(Quote &&sale)
{
    items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
}

double Basket::total_receipt(std::ostream &os)
{
    double sum = 0;
    for (auto iter = items.begin(); iter != items.end(); iter = items.upper_bound(*iter))
    {
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << std::endl;
    return sum;
}

#endif
