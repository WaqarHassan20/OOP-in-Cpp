// KEYWORD DECLTYPE AND AUTO //
#include <iostream>
using namespace std;

int main()
{
    int x = 90;
    float f = 9.99;

    auto r1 = x + f;    // Automatically deduces the type (float)
    decltype(f) r2 = f; // Declares r2 with the same type as f (float)

    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;

    return 0;
}
