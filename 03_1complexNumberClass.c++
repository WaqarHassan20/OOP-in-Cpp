// #include <iostream>
// using namespace std;

// // COMPLETE CLASS OF COMPLEX NAME
// class complex {
// private:
//   int real;
//   int img;

// public:
//   complex(int r = 0, int i = 0) {
//     real = r;
//     img = i;
//   }

//   friend complex operator+(complex c1, complex c2);
//   friend ostream &operator<<(ostream &out, complex &com);

//   void display() { cout << real << " + " << img << "i" << endl; }
// };

// ostream &operator<<(ostream &out, complex &com) {
//   out << com.real << " + " << com.img << "i";
//   return out; // Return the ostream object
// }

// complex operator+(complex c1, complex c2) {
//   complex temp;
//   temp.real = c1.real + c2.real;
//   temp.img = c1.img + c2.img;
//   return temp;
// }

// int main() {
//   complex c1(3, 6);
//   complex c2(2, 4);
//   complex c3;
//   c3 = c1 + c2;
//   c3.display();

//   complex cc1(10, 5);
//   complex cc2(6, 7);
//   complex cc3;
//   cc3 = cc2 + cc1;
//   cout << cc3 << endl;
//   return 0;
// }
#include <iostream>
using namespace std;

// Complex Number Class: Represents a complex number with real and imaginary
// parts Demonstrates operator overloading and friend functions in C++
class complex
{
private:
  int real; // Stores the real part of the complex number
  int img;  // Stores the imaginary part of the complex number

public:
  // Constructor with default arguments
  // Allows creating a complex number with optional real and imaginary parts
  // Default values are 0 if no arguments are provided
  complex(int r = 0, int i = 0)
  {
    real = r; // Initialize real part
    img = i;  // Initialize imaginary part
  }

  // Friend function to overload the + operator for complex number addition
  // Allows adding two complex numbers using the + symbol
  friend complex operator+(complex c1, complex c2);

  // Friend function to overload the << operator for complex number output
  // Enables direct printing of complex numbers using cout
  friend ostream &operator<<(ostream &out, complex &com);

  // Display method to print the complex number in a readable format
  void display() { cout << real << " + " << img << "i" << endl; }
};

// Overloaded stream insertion operator (<<) for complex numbers
// Allows printing complex numbers directly using cout
ostream &operator<<(ostream &out, complex &com)
{
  out << com.real << " + " << com.img << "i"; // Format: real + imagi
  return out;                                 // Return the ostream object to allow chaining
}

// Overloaded addition operator (+) for complex numbers
// Adds the real and imaginary parts of two complex numbers
complex operator+(complex c1, complex c2)
{
  complex temp;                  // Create a temporary complex number to store the result
  temp.real = c1.real + c2.real; // Add real parts
  temp.img = c1.img + c2.img;    // Add imaginary parts
  return temp;                   // Return the new complex number
}

// Main function to demonstrate complex number operations
int main()
{
  // First example of complex number addition
  complex c1(3, 6); // Create first complex number: 3 + 6i
  complex c2(2, 4); // Create second complex number: 2 + 4i
  complex c3;       // Declare a complex number to store the result
  c3 = c1 + c2;     // Add the two complex numbers
  c3.display();     // Display the result: 5 + 10i

  // Second example of complex number addition
  complex cc1(10, 5);  // Create first complex number: 10 + 5i
  complex cc2(6, 7);   // Create second complex number: 6 + 7i
  complex cc3;         // Declare a complex number to store the result
  cc3 = cc2 + cc1;     // Add the two complex numbers
  cout << cc3 << endl; // Print the result using overloaded << operator

  return 0;
}