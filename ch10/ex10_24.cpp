#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::string;
using std::vector;
using namespace std::placeholders;

bool check_size(int number, const string &str)
{
    return number > str.size();
}

int main(int argc, char const *argv[])
{
    vector<int> numbers{1, 2, 5, 7, 8, 100};
    auto iter = std::find_if(numbers.begin(), numbers.end(),
                             std::bind(check_size, _1, "Hello"));

    if (iter != numbers.end())
    {
        std::cout << *iter << std::endl;
    }
    else
    {
        std::cout << "The number not found." << std::endl;
    }

    return 0;
}
