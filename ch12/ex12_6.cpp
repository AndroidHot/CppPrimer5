#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

vector<int> *make_vector()
{
    return new vector<int>();
}

void read_input_value(vector<int> *vec)
{
    int value;
    while (cin >> value)
    {
        vec->push_back(value);
    }
}

void print_value(vector<int> *vec)
{
    for (auto &v : *vec)
    {
        cout << v << " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> *vec = make_vector();
    read_input_value(vec);
    print_value(vec);
    delete vec;
    vec = nullptr;
    return 0;
}

