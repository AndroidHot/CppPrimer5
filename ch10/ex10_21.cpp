#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 10;
    auto f = [&i]() -> bool {
        if (i == 0)
        {
            return true;
        }
        --i;
        return false;
    };

    while (!f())
    {
        std::cout << i << std::endl;
    }

    return 0;
}
