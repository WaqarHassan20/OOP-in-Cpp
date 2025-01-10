#include <iostream>
using namespace std;

// Template function to find the minimum of two values
template <class T>
T minimum(T x, T y)
{
    // Use the ternary operator to return the smaller of the two values
    return x < y ? x : y;
}

// Template function to add two values of potentially different types
template <class T, class R>
void add(T a, R b)
{
    // Output the sum of the two values
    cout << a + b << endl;
}

int main()
{
    // Call the `minimum` template function with double arguments
    cout << minimum(2.3, 6.6) << endl; // Output: Smaller of 2.3 and 6.6 (2.3)

    // Call the `minimum` template function with integer arguments
    cout << minimum(5, 9) << endl; // Output: Smaller of 5 and 9 (5)

    // Call the `add` template function with two double arguments
    add(4.4, 9.2); // Output: Sum of 4.4 and 9.2 (13.6)

    // Call the `add` template function with an integer and a double argument
    add(7, 8.5); // Output: Sum of 7 and 8.5 (15.5)

    // Call the `add` template function with two integer arguments
    add(2, 4); // Output: Sum of 2 and 4 (6)

    return 0;
}
