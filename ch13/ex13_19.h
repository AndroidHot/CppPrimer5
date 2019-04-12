#include <string>

using std::string;

class Employee
{

public:
    Employee();
    Employee(const string &name);
    Employee(const Employee &) = delete;
    Employee &operator=(const Employee &) = delete;
    const int get_id() const { return id_; }
    ~Employee(){};

private:
    int id_;
    string name_;
    static int s_increment;
};
