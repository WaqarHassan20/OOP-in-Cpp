// PREPROCESSOR DIRECTIVES AND DEFINE KEYWORD
#include <iostream>
#define pi 3.1424
#define c cout
#define MSG(x) #x
#define SQR(x) (x * x)
#define MAX(x, y) (x > y ? x : y)
#ifndef pi
#define pi 3
#endif
    using namespace std;
int main()
{
    c << pi << endl;
    c << SQR(9) << endl;
    c << MAX(2, 9) << endl;
    c << MSG(HELLO) << endl;
    return 0;
}
