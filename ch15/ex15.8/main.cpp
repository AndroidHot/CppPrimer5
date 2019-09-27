#include "bulk_quote.h"
#include "quote.h"
#include <iostream>
#include <vector>
#include <memory>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::vector;

void debug(const Quote &item)
{
    item.debug();
}

int main(int argc, char const *argv[])
{
    Quote item1("#1984", 18.8);
    BulkQuote item2("#1Q84", 18.8, 11, 0.5);

    float amount = 0;
    amount += item1.net_price(25);
    amount += item1.net_price(25);
    amount += item2.net_price(25);
    amount += item2.net_price(25);

    std::cout << "obj total amount: " << amount << endl;

    // ex15_28
    vector<Quote> objVector;
    objVector.push_back(item1);
    objVector.push_back(item1);
    objVector.push_back(item2);
    objVector.push_back(item2);

    amount = 0;
    for (auto item : objVector)
    {
        amount += item.net_price(25);
    }

    std::cout << "obj vector total amount: " << amount << endl;

    // ex15_29
    vector<shared_ptr<Quote>> ptrVector;
    ptrVector.push_back(make_shared<Quote>(item1));
    ptrVector.push_back(make_shared<Quote>(item1));
    ptrVector.push_back(make_shared<BulkQuote>(item2));
    ptrVector.push_back(make_shared<BulkQuote>(item2));

    amount = 0;
    for (auto item : ptrVector)
    {
        amount += item->net_price(25);
    }

    std::cout << "ptr vector total amount: " << amount << endl;

    return 0;
}
