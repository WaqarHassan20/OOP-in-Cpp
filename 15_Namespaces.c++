// NAMESPACE KEYWORD DEMO CODE
#include <iostream>
using namespace std;

// Namespace 'one' contains a function 'fun'
namespace one
{
    void fun()
    {
        cout << "One" << endl; // Outputs "One"
    }
}

// Namespace 'two' contains a different function 'fun'
namespace two
{
    void fun()
    {
        cout << "Two" << endl; // Outputs "Two"
    }
}

// Bringing all functions from namespace 'one' into the global scope
using namespace one;

int main()
{
    fun();      // Calls 'fun' from namespace 'one' due to 'using namespace one'
    two::fun(); // Calls 'fun' from namespace 'two' using explicit scope resolution
    return 0;
}
