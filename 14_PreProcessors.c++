// PREPROCESSOR DIRECTIVES AND DEFINE KEYWORD
#include <iostream>

// Define constants and macros
#define pi 3.1424                 // Define a constant for pi
#define c cout                    // Macro for simplifying 'cout'
#define MSG(x) #x                 // Macro to convert argument into a string
#define SQR(x) (x * x)            // Macro to calculate the square of a value
#define MAX(x, y) (x > y ? x : y) // Macro to find the maximum of two values

#ifndef pi
#define pi 3 // Redefine pi if not already defined (conditional compilation)
#endif

using namespace std;

int main()
{
    c << pi << endl;         // Output the value of pi (3.1424 due to earlier definition)
    c << SQR(9) << endl;     // Output the square of 9 (81)
    c << MAX(2, 9) << endl;  // Output the maximum of 2 and 9 (9)
    c << MSG(HELLO) << endl; // Output the string "HELLO" (MSG converts argument to a string)
    return 0;
}
