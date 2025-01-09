// Inheritance Demonstration in C++
// This program showcases single inheritance by creating a base class
// 'rectangle' and a derived class 'cuboid' that inherits properties and methods
// from 'rectangle'

#include <iostream>
using namespace std;

// Base Class: Rectangle
// Represents a 2D rectangular shape with length and width
class rectangle {
private:
  // Private member variables to store rectangle's dimensions
  // Encapsulation: These can only be modified through public methods
  int length; // Stores the length of the rectangle
  int width;  // Stores the width of the rectangle

public:
  // Constructors
  // 1. Parameterized constructor with default values
  // Allows creating a rectangle with optional length and width
  rectangle(int l = 0, int w = 0);

  // 2. Copy constructor
  // Creates a new rectangle by copying another rectangle's dimensions
  rectangle(rectangle &r);

  // Setter methods: Allow controlled modification of rectangle's dimensions
  // Includes input validation to prevent invalid dimensions
  void setLength(int l); // Set length with validation
  void setWidth(int w);  // Set width with validation

  // Getter methods: Provide read access to private member variables
  int getLength(); // Retrieve the current length
  int getWidth();  // Retrieve the current width

  // Calculation methods for rectangle properties
  int perimeter(); // Calculate and return rectangle's perimeter
  int area();      // Calculate and return rectangle's area
};

// Constructor implementation
// Initializes length and width with provided values
rectangle::rectangle(int l, int w) {
  length = l; // Set length to input value
  width = w;  // Set width to input value
}

// Copy constructor implementation
// Creates a new rectangle by copying dimensions from another rectangle
rectangle::rectangle(rectangle &rec) {
  length = rec.length; // Copy length from source rectangle
  width = rec.width;   // Copy width from source rectangle
}

// Set length method with input validation
void rectangle::setLength(int l) {
  if (l >= 0) {
    length = l; // Set length if input is non-negative
  } else {
    cout << "Invalid length "; // Error message for negative length
  }
}

// Set width method with input validation
void rectangle::setWidth(int w) {
  if (w >= 0) {
    width = w; // Set width if input is non-negative
  } else {
    cout << "Invalid width "; // Error message for negative width
  }
}

// Calculate rectangle area
int rectangle::area() { return length * width; }

// get the length
int rectangle::getLength() { return length; }

// get the width
int rectangle::getWidth() { return width; }

// Calculate rectangle perimeter
int rectangle::perimeter() { return 2 * (length + width); }

// Derived Class: Cuboid
// Inherits properties and methods from rectangle
// Extends the base class by adding a height dimension
class cuboid : public rectangle // Public inheritance
{
private:
  int height; // Additional dimension for 3D cuboid

public:
  // Constructor for cuboid
  // Initializes length, width, and height
  // Uses base class setter methods to set length and width
  cuboid(int l, int w, int h) {
    setLength(l); // Use inherited setter from rectangle
    setWidth(w);  // Use inherited setter from rectangle
    height = h;   // Set cuboid-specific height
  }

  // Setter for height
  void setHeight(int h) { height = h; }

  // Getter for height
  int getHeight() { return height; }

  // Calculate cuboid volume using inherited length and width
  int volume() { return height * getLength() * getWidth(); }
};

// Main function to demonstrate inheritance
int main() {
  // Create a cuboid with length 3, width 5, height 7
  cuboid c(3, 5, 7);

  // Demonstrate inherited and extended methods
  cout << "Length is = " << c.getLength() << endl;    // Inherited method
  cout << "Height is = " << c.getHeight() << endl;    // Derived class method
  cout << "Width is = " << c.getWidth() << endl;      // Inherited method
  cout << "Perimeter is = " << c.perimeter() << endl; // Inherited method
  cout << "Volume is = " << c.volume() << endl;       // Derived class method
  cout << "Area is = " << c.area() << endl;           // Inherited method

  return 0;
}

// Key Inheritance Concepts Demonstrated:
// 1. Single Inheritance: cuboid inherits from rectangle
// 2. Public Inheritance: All public and protected members are inherited
// 3. Method Reuse: Inherited methods like getLength(), area(), perimeter()
// 4. Extension: Added height and volume() in derived class
// 5. Constructor Chaining: Derived class constructor uses base class setters