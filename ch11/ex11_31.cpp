#include <iostream>
#include <map>
#include <string>

using std::multimap;
using std::string;

bool remove_book(multimap<string, string> *books, const string &author)
{
    auto it = books->find(author);
    if (it == books->end())
    {
        return false;
    }
    books->erase(it);
    return true;
}

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
        {"yangjiang", "ganxiaoliuji"}};

    print_book(books);

    remove_book(&books, "yuhua");
    print_book(books);

    remove_book(&books, "yangjiang");
    print_book(books);

    remove_book(&books, "qianzhongshu");
    print_book(books);

    return 0;
}

