// USING DELETE KEYWORD FOR POINTER
#include <iostream>
using namespace std;
class test
{
    int *p;

public:
    test()
    {
        p = new int[10];
        cout << "Test created" << endl;
    }
    ~test()
    {
        delete[] p;
        cout << "test Destroyrd " << endl;
    }
};
void fun()
{
    test *ptr = new test();
    delete ptr;
}
int main()
{
    fun();
    return 0;
}
