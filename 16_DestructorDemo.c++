// DESTRUCTOR DEMO CODE
#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "Test created" << endl;
    }
    ~test()
    {
        cout << "test Destroyrd " << endl;
    }
};

// using the object creating approach
void fun()
{
    test math;
}

// Using the pointer notation
void fun2()
{
    test *ptr = new test();
}

int main()
{
    fun();
    return 0;
}