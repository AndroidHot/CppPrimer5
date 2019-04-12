#include "ex13_18.h"
#include <iostream>

int Employee::s_increment = 0;

Employee::Employee()
{
    id_ = s_increment++;
}

Employee::Employee(const string &name)
{
    id_ = s_increment++;
    name_ = name;
}

int main(int argc, char const *argv[])
{
    Employee employee1("AndroidHot1");
    std::cout << employee1.get_id() << std::endl;
    Employee employee2("AndroidHot2");
    std::cout << employee2.get_id() << std::endl;
    return 0;
}

