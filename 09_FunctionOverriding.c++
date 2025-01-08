// FUNCTION OVERRIDING AND VIRTUAL KEYWORD //
#include <iostream>
using namespace std;
class base
{
public:
    void fun() // virtual keyword  //
    {
        cout << "Base fun " << endl;
    }
};
class derived : public base
{
public:
    void fun()
    {
        cout << "Derived fun " << endl;
    }
};
int main()
{
    base *ptr;
    derived d;
    ptr = &d;
    ptr->fun();
    return 0;
}
