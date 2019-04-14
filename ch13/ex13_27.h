#include <string>

using std::size_t;
using std::string;

class HasPtr
{
  public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)){};

    HasPtr(const HasPtr &hp) : ps(hp.ps), i(hp.i), use(hp.use)
    {
        ++*use;
    };
    HasPtr &operator=(const HasPtr &rhs_hp)
    {
        ++*rhs_hp.use;
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }
        use = rhs_hp.use;
        ps = rhs_hp.ps;
        i = rhs_hp.i;
        return *this;
    };

    ~HasPtr()
    {
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }
    };

  private:
    string *ps;
    int i;
    size_t *use;
};
