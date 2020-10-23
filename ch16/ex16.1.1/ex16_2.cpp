#include <stdio.h>

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2)
        return -1;
    if (v2 < v1)
        return 1;
    return 0;
}

int main()
{
    compare(1, 2);
    compare(1.0f, 2.0f);
    compare(1.0, 2.0);
    return 0;
}
