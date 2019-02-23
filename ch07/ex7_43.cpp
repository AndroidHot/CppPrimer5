#include <vector>
using std::vector;

class NoDefault
{
public:
    NoDefault(int i) { };
private:
};

class C
{
public:
    C() : d(10) { };

private:
    NoDefault d;
};

int main(int argc, char const *argv[])
{
    vector<C> vec(10);
    return 0;
}

