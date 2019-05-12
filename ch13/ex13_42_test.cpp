#include "ex13_42.h"
#include <istream>
#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

void run_queries(ifstream &ifs)
{
    TextQuery tq(ifs);
    while (true)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")
        {
            break;
        }

        QueryResult result = tq.query(s);
        print(cout, result) << endl;
    }
}

int main(int argc, char const *argv[])
{
    ifstream ifs("../res/words.txt");
    run_queries(ifs);
}
