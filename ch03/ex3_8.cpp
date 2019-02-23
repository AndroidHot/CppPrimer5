#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main() {
    string str("Hello CPP");

    // while
    decltype(str.size()) i = 0;
    while (i < str.size()) {
        str[i++] = 'X';
    }
    cout << str << endl;

    // for
    for (decltype(str.size()) i = 0; i < str.size(); str[i++] = 'Y');
    cout << str << endl;

    // i like foreach

    return 1;
}