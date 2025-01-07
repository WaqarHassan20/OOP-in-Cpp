// CONSTRUCTERS IN INHERITANCE

#include <iostream>
using namespace std;
class base
{
public:
  base() { cout << "NON -PARAMETERIZED BASE" << endl; }
  base(int x) { cout << "PARAMETER OF BASE " << endl; }
};
class derived : public base
{
public:
  derived() { cout << "NON -PARAMETERIZED DERIVED " << endl; }
  derived(int y) { cout << "PARAMETER OF DERIVED " << endl; }
  derived(int a, int b) : base(a) { cout << "PARAM OF DERIVED " << b << endl; }
};
int main()
{
  derived d();
  derived d(10);
  derived d(10, 6);
  return 0;
}
