#include <string>

using std::string;

class HasPtr
{
  public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0){};
    ~HasPtr(){};

    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i){};

  private:
    string *ps;
    int i;
};
