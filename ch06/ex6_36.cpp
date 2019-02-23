#include <iostream>

using std::string;

using arrT = string[10];

string (*func())[10];

arrT* func();

auto func() -> string(*)[10];

string name[10] = {};
decltype(name) *func();

