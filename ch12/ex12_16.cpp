#include <memory>

using std::unique_ptr;

int main(int argc, char const *argv[])
{
    unique_ptr<int> p1(new int(10));
    // unique_ptr<int> p2(p1);
    // unique_ptr<int> p3 = p1;
    return 0;
}

