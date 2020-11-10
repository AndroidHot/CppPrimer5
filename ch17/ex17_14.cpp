#include <regex>

int main(int argc, char const *argv[])
{
    std::regex reg("[[:alpha:]"); // Unexpected character in bracket expression.
    std::regex reg2("[z-a]");     // Invalid range in bracket expression.
    return 0;
}
