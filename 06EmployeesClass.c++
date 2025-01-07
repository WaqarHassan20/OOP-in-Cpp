// PRACTICE QUESTION FOR INHERTANCE BY ABDUL BARI CPP
#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    string name;

public:
    employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    int getEmoloyeeID() { return id; }
    string getName() { return name; }
};
class FullTimeEmployee : public employee
{
private:
    int salary;

public:
    FullTimeEmployee(int id, string name, int salary) : employee(id, name)
    {
        this->salary = salary;
    };
    int getSalary() { return salary; }
};
class PartTimeEmployee : public employee
{
private:
    int wage;

public:
    PartTimeEmployee(int id, string name, int wage) : employee(id, name)
    {
        this->wage = wage;
    }
    int getWage() { return wage; }
};
int main()
{
    PartTimeEmployee E1(10, "ALI ABBAS", 1000000);
    FullTimeEmployee E2(15, "WAHEED HASSAN", 1250000);
    cout << "NAME OF EMPLOYEE IS      " << E1.getName() << endl
         << "ID OF EMPLOYEE IS        " << E1.getEmoloyeeID() << endl
         << "WAGE OF E1 IS            " << E1.getWage() << endl;
    cout << endl;
    cout << "NAME OF EMPLOYEE IS      " << E2.getName() << endl
         << "ID OF EMPLOYEE IS        " << E2.getEmoloyeeID() << endl
         << "SALARY OF E2 IS          " << E2.getSalary() << endl;
    return 0;
}
