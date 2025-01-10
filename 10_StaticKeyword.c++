#include <iostream>
using namespace std;

class test
{
private:
    int a, b;

public:
    static int count; // Shared among all objects

    test()
    {
        a = 10;
        b = 20;
        count++; // Increment on each object creation
    }

    static int getCount()
    {
        return count; // Return current count
    }
};

int test::count = 0; // Initialize static variable

int main()
{
    test t1, t2, t3;
    cout << t1.getCount() << endl;    // Access count using object
    cout << test::getCount() << endl; // Access count using class name
    t1.count = 50;                    // Modify static variable
    cout << t2.getCount() << endl;    // Updated count reflected for all objects
    return 0;
}
