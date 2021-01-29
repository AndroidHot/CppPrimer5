#include <iostream>

class Screen {
 public:
  int cursor;
};

int main(int argc, char const *argv[]) {
  Screen screen;
  screen.cursor = 100;

  auto pdata = &Screen::cursor;

  printf("cursor value is: %d\n", screen.*pdata);

  return 0;
}
