#include <string>
#include <iostream>

using std::string;

class HasPtr
{
    friend void swap(HasPtr &, HasPtr &);
    friend bool operator<(const HasPtr &lhs_hp, const HasPtr &rhs_hp);

  public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0){};

    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i){};
    HasPtr &operator=(const HasPtr &rhs_hp);

    ~HasPtr() { delete ps; };

  private:
    string *ps;
    int i;
};

HasPtr &HasPtr::operator=(const HasPtr &rhs_hp)
{
    auto new_temp = new string(*rhs_hp.ps);
    delete ps;
    ps = new_temp;
    i = rhs_hp.i;
    return *this;
}

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}

inline bool operator<(const HasPtr &lhs_hp, const HasPtr &rhs_hp)
{
    return *lhs_hp.ps < *rhs_hp.ps;
}
