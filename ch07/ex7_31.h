#ifndef EX7_31
#define EX7_31

class Y;

class X
{
    Y *y = nullptr;
};

class Y
{
    X x;
};

#endif
