// FUNCTION OVERRIDING AND VIRTUAL KEYWORD //
#include <iostream>
using namespace std;

// Base class declaration
class base
{
public:
  // Member function in base class
  // Note: No virtual keyword here, so it won't support polymorphism
  void fun()
  {
    cout << "Base fun " << endl;
  }
};

// Derived class inheriting base class
class derived : public base
{
public:
  // Member function in derived class overrides base class function
  void fun()
  {
    cout << "Derived fun " << endl;
  }
};

int main()
{
  base *ptr; // Pointer to base class
  derived d; // Object of derived class

  ptr = &d;   // Base class pointer points to derived class object
  ptr->fun(); // Calls base class function since fun() is not virtual

  return 0;
}
