#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec;

    int a = vec.at(0); // terminating with uncaught exception of type std::out_of_range: vector

    int b = vec[0]; // Segmentation fault: 11

    int c = vec.front(); // Segmentation fault: 11

    int d = vec.back(); // Segmentation fault: 11

    return 0;
}
