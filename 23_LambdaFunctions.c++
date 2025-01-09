#include <iostream>
using namespace std;

int main()
{
    // Lambda function to print "HELLO"
    []()
    {
        cout << "HELLO" << endl;
    }();

    // Lambda function to calculate and print the sum of two numbers
    [](int a, int b)
    {
        cout << "sum is " << a + b << endl;
    }(10, 5);

    // Lambda function to calculate the sum and return it
    auto r = [](int a, int b) -> int // Optional notation for return type
    {
        return a + b;
    }(6, 8);

    cout << "sum is " << r << endl;

    int a = 10;
    int b = 30;

    // Lambda capturing variables by value
    [a, b]()
    {
        cout << a << " " << b << endl;
    }();

    // Lambda capturing variables by reference
    [&]()
    {
        cout << a << " " << b << endl;
    }();

    // Lambda capturing specific variables by reference and modifying them
    [&a, &b]()
    {
        cout << ++a << " " << ++b << endl;
    }();

    return 0;
}

// Output of the above program is //
// 1 - HELLO
// 2 - sum is 15
// 3 - sum is 14
// 4 - 10 30
// 5 - 10 30
// 6 - 11 31
