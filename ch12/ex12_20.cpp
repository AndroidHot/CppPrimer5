#include "ex12_19.h"
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream ifs("../res/book.txt");
    StrBlob blob;
    if (ifs)
    {
        string buf;
        while (std::getline(ifs, buf))
        {
            blob.push_back(buf);
        }
    }
    for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend; pbeg.incr())
    {
        std::cout << pbeg.deref() << std::endl;
    }
}
