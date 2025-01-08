// TRY, THROW AND CATCH KEYWORDS
#include <iostream>
    using namespace std;
int divide(int i, int j)
{
    return i / j;
}
int main()
{
    int a, b, c;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw 0;
        }
        else
        {
            c = divide(a, b);
            cout << "Answer is " << c << endl;
        }
    }
    catch (int x)
    {
        cout << "Change value of b ." << endl
             << "Dividing by " << x << endl;
    }
    return 0;
}
