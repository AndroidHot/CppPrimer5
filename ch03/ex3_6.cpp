#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main() {
    string str("Hello CPP!!!");
    for (char &s : str) {
        isalpha(s) && (s = 'X');
    }
    cout << str << endl;
    return 1;
}
