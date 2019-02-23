#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    vector<string> list;
    for (string input; cin >> input; list.push_back(input));

    for (auto &word : list) {
        for (auto &c : word) {
            c = toupper(c);
        }
    }
    
    for (auto word : list) {
        cout << word << endl;
    }

    return 0;
}
