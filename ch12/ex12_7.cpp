#include <iostream>
#include <vector>
#include <memory>

using std::cin;
using std::cout;
using std::make_shared;
using std::shared_ptr;
using std::vector;

shared_ptr<vector<int>> make_vector()
{
    return make_shared<vector<int>>();
}

void read_input_value(shared_ptr<vector<int>> vec_ptr)
{
    int value;
    while (cin >> value)
    {
        vec_ptr->push_back(value);
    }
}

void print_value(shared_ptr<vector<int>> vec_ptr)
{
    for (auto &v : *vec_ptr)
    {
        cout << v << " ";
    }
}

int main(int argc, char const *argv[])
{
    shared_ptr<vector<int>> vec_ptr = make_vector();
    read_input_value(vec_ptr);
    print_value(vec_ptr);
    return 0;
}

