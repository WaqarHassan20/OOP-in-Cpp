#include <iostream>
using namespace std;
template <class T>
T minimum(T x, T y)
{
    return x < y ? x : y;
}
template <class T, class R>
void add(T a, R b)
{
    cout << a + b << endl;
}
int main()
{
    cout << minimum(2.3, 6.6) << endl;
    cout << minimum(5, 9) << endl;
    add(4.4, 9.2);
    add(7, 8.5);
    add(2, 4);
    return 0;
}
