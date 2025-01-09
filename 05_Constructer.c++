// CONSTRUCTERS IN INHERITANCE

#include <iostream>
using namespace std;

// Base class demonstrating different types of constructors
class base
{
public:
  // Default (Non-parameterized) constructor
  // Called when no arguments are provided
  base() { cout << "NON-PARAMETERIZED BASE" << endl; }

  // Parameterized constructor
  // Called when an integer argument is passed
  base(int x) { cout << "PARAMETER OF BASE " << endl; }
};

// Derived class inheriting from base class
// Demonstrates constructor inheritance and overloading
class derived : public base
{
public:
  // Default constructor of derived class
  // By default, calls the base class's default constructor
  derived() { cout << "NON-PARAMETERIZED DERIVED " << endl; }

  // Parameterized constructor with one argument
  // Demonstrates constructor overloading
  derived(int y) { cout << "PARAMETER OF DERIVED " << endl; }

  // Parameterized constructor with two arguments
  // Shows multiple constructor options
  derived(int y, int z) { cout << "TWO PARAMETERS OF DERIVED " << endl; }
};

// Main function to demonstrate constructor behavior
int main()
{
  // Uncomment to see different constructor calls
  // Creates an object using default constructor
  // derived d();  // Note: This line might not work as expected in C++

  // Creates an object with one parameter
  derived d(10);

  // Creates an object with two parameters
  derived d2(10, 6);

  return 0;
}
