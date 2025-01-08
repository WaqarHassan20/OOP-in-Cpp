#include <iostream>
using namespace std;
class test
{
private:
    int a;
    int b;

public:
    static int count;
    test()
    {
        a = 10;
        b = 20;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int test::count = 0;
int main()
{
    test t1, t2, t3;
    cout << t1.getCount() << endl;
    cout << test::getCount() << endl;
    t1.count = 50;
    cout << t2.getCount() << endl;
    return 0;
}