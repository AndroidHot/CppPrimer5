#include <vector>
#include <list>
#include <string>

using std::list;
using std::string;
using std::vector;

template <typename I, typename T>
I find(I first, I last, const T &val)
{
    for (; first != last; ++first)
    {
        if (*first == val)
        {
            return first;
        }
    }
    return last;
}

int main()
{
    vector<int> numbers({1, 2, 3, 4, 5});
    auto it = find(numbers.begin(), numbers.end(), 3);
    printf("*it: %d\n", *it);

    it = find(numbers.begin(), numbers.end(), 0);
    printf("it == numbers.end(): %d\n", it == numbers.end());

    list<string> texts({"Google", "Apple", "git", "C++", "Java"});
    auto result = find(texts.begin(), texts.end(), "C++");
    printf("*result: %s\n", (*result).c_str());

    result = find(texts.begin(), texts.end(), "MicroSoft");
    printf("result == result.end(): %d\n", result == texts.end());
}
