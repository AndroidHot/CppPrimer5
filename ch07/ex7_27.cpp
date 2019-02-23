#include "screen.h"

int main(int argc, char const *argv[])
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout).set('*');
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
    return 0;
}
