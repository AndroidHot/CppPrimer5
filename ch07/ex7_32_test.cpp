#include "ex7_32.h"

int main(int argc, char const *argv[])
{
    Window_mgr window_mgr;
    window_mgr.screens.push_back(Screen(4, 4, 'X'));
    Screen& screen = window_mgr.screens[0];
    screen.display(std::cout);
    std::cout << "\n";
    window_mgr.clear(0);
    screen.display(std::cout);
    return 0;
}
