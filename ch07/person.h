
#ifndef EX7_PERSON
#define EX7_PERSON

#include <string>
#include <iostream>

class Person
{

friend std::istream& read(std::istream&, Person&);
friend std::ostream& print(std::ostream& os, const Person& person);

private:
    std::string name;
    std::string address;

public:
    Person() = default;
    Person(const std::string sname, const std::string saddress) : name(sname), address(saddress) { }
    explicit Person(std::istream& is) { read(is, *this); }

    std::string get_name() const { return name; };
    std::string get_address() const { return address; };

};

std::istream& read(std::istream& is, Person& person)
{
    return is >> person.name >> person.address;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    return os << person.name << " " << person.address;
}


#endif
