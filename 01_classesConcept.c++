#include <iostream>
using namespace std;

// Rectangle class with mutator and accessor methods
class Rectangle {
private:
  int length;
  int width;

public:
  // Mutator methods with validation
  void setLength(int l) {
    if (l >= 0) {
      length = l;
    } else {
      cout << "Length cannot be negative" << endl;
    }
  }

  void setWidth(int w) {
    if (w >= 0) {
      width = w;
    } else {
      cout << "Width cannot be negative" << endl;
    }
  }

  // Accessor methods
  int getLength() const { return length; }

  int getWidth() const { return width; }

  // Calculation methods
  int area() const { return length * width; }

  int perimeter() const { return 2 * (length + width); }
};

// Pointer-based Rectangle class
class PointerRectangle {
public:
  int length;
  int width;

  int area() const { return length * width; }

  int perimeter() const { return 2 * (length + width); }
};

int main() {
  // Demonstrating Rectangle class with mutator methods
  Rectangle rec1;
  rec1.setLength(10);
  rec1.setWidth(20);
  cout << "Rectangle 1:" << endl;
  cout << "Area = " << rec1.area() << endl;
  cout << "Perimeter = " << rec1.perimeter() << endl;

  // Demonstrating PointerRectangle class
  PointerRectangle *ptr = new PointerRectangle();
  ptr->length = 15;
  ptr->width = 7;
  cout << "\nPointer Rectangle:" << endl;
  cout << "Area = " << ptr->area() << endl;
  cout << "Perimeter = " << ptr->perimeter() << endl;

  // Clean up dynamically allocated memory
  delete ptr;

  return 0;
}