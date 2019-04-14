#include <string>

using std::string;

class HasPtr
{
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
    if (this != &rhs_hp)
    {
        delete ps;
        ps = new string(*rhs_hp.ps);
        i = rhs_hp.i;
    }

    return *this;
}
