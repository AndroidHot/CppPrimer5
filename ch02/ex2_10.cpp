#include <iostream>

std::string gloabl_str;
int gloabl_int;

int main() {
    std::string local_str;
    int local_int;
    std::cout << gloabl_str << std::endl;
    std::cout << gloabl_int << std::endl;
    std::cout << local_str << std::endl;
    std::cout << local_int << std::endl;
    return 0;    
}
