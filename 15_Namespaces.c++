// NAMESPACE KEYWORD DEMO CODE
#include <iostream>
    using namespace std;
namespace one
{
    void fun()
    {
        cout << "One " << endl;
    }
}
namespace two
{
    void fun()
    {
        cout << "Two" << endl;
    }
}
using namespace one;
int main()
{
    fun();
    two::fun();
    return 0;
}
