#include "blob.h"
#include <string>

using std::string;

typedef Blob<string> StrBlob;

int main()
{
    StrBlob str_blob = std::initializer_list<string>({"Apple", "C++"});

    if (!str_blob.empty())
    {
        printf("%s\n", str_blob.back().c_str());
    }

    str_blob.pop_back();
    str_blob.pop_back();

    if (str_blob.empty())
    {
        str_blob.push_back("Google");
    }

    printf("%s\n", str_blob.back().c_str());

    printf("%s\n", str_blob[str_blob.size() - 1].c_str());
}