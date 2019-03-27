#include <iostream>
#include <map>
#include <string>

using std::multimap;
using std::string;

void print_book(const multimap<string, string> &books)
{
    for (auto it = books.cbegin(); it != books.cend(); ++it)
    {
        std::cout << "author: " << it->first << ", book: " << it->second << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    multimap<string, string> books = {
        {"yangjiang", "womensa"},
        {"yuhua", "huozhe"},
        {"yangjiang", "ganxiaoliuji"},
        {"a", "a"} // just fot test.
    };

    print_book(books);
    return 0;
}

