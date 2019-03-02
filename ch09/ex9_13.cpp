#include <vector>
#include <list>

using std::list;
using std::vector;

int main(int argc, char const *argv[])
{
    list<int> int_list{1, 3, 5, 7, 9};
    vector<int> int_vec{1, 3, 5, 7, 9};

    vector<double> double_vec1(int_list.begin(), int_list.end());
    vector<double> double_vec2(int_vec.begin(), int_vec.end());

    return 0;
}
