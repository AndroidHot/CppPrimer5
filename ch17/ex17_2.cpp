#include <iostream>
#include <tuple>
#include <vector>
#include <string>

using TupleType = std::tuple<std::string, std::vector<std::string>, std::pair<std::string, int>>;

int main(int argc, char const *argv[])
{
    TupleType t("Hello", {"C++", "and"}, {"C", 10});
    printf("tuple t: %s %s %s %s\n",
           std::get<0>(t).c_str(), std::get<1>(t)[0].c_str(),
           std::get<1>(t)[1].c_str(), std::get<2>(t).first.c_str());
    return 0;
}
