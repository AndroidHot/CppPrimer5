#ifndef CPP_SCREEN
#define CPP_SCREEN

#include <string>
#include <iostream>

class Screen
{
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos wd, pos ht): width(wd), height(ht), content(wd * ht, ' ') { };
    Screen(pos wd, pos ht, char c): width(wd), height(ht), content(wd * ht, c) { };

    inline char get()
    {
        return content[cursor];
    };

    inline char get(pos r, pos c)
    {
        return content[r * width + c]; 
    };

    Screen& move(pos r, pos c);
    Screen& set(char value);
    Screen& set(pos r, pos c, char value);
    Screen& display(std::ostream& os) { do_display(os); return *this; };
    const Screen& display(std::ostream& os) const { do_display(os); return *this; };

    ~Screen();

private:
    /* data */
    pos cursor = 0;
    pos width = 0, height = 0;
    std::string content;
    void do_display(std::ostream& os) const 
    {
        os << content;
    };
};

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen& Screen::set(char value)
{
    content[cursor] = value;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char value)
{
    content[r * width + c] = value;
    return *this;
}

Screen::~Screen()
{
}


#endif
