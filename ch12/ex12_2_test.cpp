#include "ex12_2.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    const StrBlob csb = {"hello", "c++"};
    StrBlob sb = {"hello", "java"};

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "c++";
    std::cout << sb.front() << " " << sb.back() << std::endl;
    return 0;
}

