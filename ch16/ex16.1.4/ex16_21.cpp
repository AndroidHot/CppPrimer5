#include <iostream>
#include <memory>

class DebugDelete
{
public:
    DebugDelete(std::ostream &s = std::cerr) : os(s) {}

    template <typename T>
    void operator()(T *p) const
    {
        os << "deleting ptr start" << std::endl;
        delete p;
        os << "deleting ptr end" << std::endl;
    }

private:
    std::ostream &os;
};

int main()
{
    DebugDelete deleter;
    int *a = new int;
    deleter(a);

    float *b = new float;
    deleter(b);

    std::unique_ptr<int, DebugDelete> p(new int, DebugDelete());
}
