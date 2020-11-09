#include <iostream>
#include <bitset>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<unsigned int> vec({1, 2, 3, 5, 8, 13, 21});
    std::bitset<32> bitvec;
    for (auto &v : vec)
    {
        bitvec.set(v);
    }
    std::cout << bitvec << std::endl;

    std::bitset<32> bitvec2;
    for (unsigned int i = 0; i != 32; ++i)
    {
        bitvec2[i] = bitvec[i];
    }
    std::cout << bitvec2 << std::endl;

    return 0;
}
