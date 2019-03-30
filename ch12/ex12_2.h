#include <string>
#include <memory>
#include <initializer_list>
#include <vector>
#include <exception>

using std::initializer_list;
using std::make_shared;
using std::shared_ptr;
using std::string;
using std::vector;

class StrBlob
{
  public:
    typedef vector<string>::size_type size_type;

    StrBlob();
    StrBlob(initializer_list<string> il);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string &str) { data->push_back(str); }
    void pop_back();

    const string &front() const;
    const string &back() const;
    string &front();
    string &back();

    ~StrBlob();

  private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
    {
        throw std::out_of_range(msg);
    }
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob!");
    data->pop_back();
}

string &StrBlob::front()
{
    check(0, "front on empty StrBlob!");
    return data->front();
}

string &StrBlob::back()
{
    check(0, "back on empty StrBlob!");
    return data->back();
}

const string &StrBlob::front() const
{
    check(0, "front on empty StrBlob!");
    return data->front();
}

const string &StrBlob::back() const
{
    check(0, "back on empty StrBlob!");
    return data->back();
}

StrBlob::~StrBlob() {}

