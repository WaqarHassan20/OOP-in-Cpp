#include <iostream>
using namespace std;

// Rectangle class: Represents a geometric rectangle with length and width
class Rectangle
{
private:
  int length; // Stores the length of the rectangle
  int width;  // Stores the width of the rectangle

public:
  // Default constructor
  Rectangle();

  // Copy constructor
  Rectangle(const Rectangle &rec);

  // Parameterized constructor
  Rectangle(int l, int w);

  // Getter methods
  int getLength() { return length; }
  int getWidth() { return width; }

  // Setter methods
  void setLength(int l);
  void setWidth(int w);

  // Utility methods
  int area();
  int perimeter();
  bool isSquare();

  // Destructor
  ~Rectangle();
};

// Default constructor
Rectangle::Rectangle()
{
  length = 1;
  width = 1;
}

// Parameterized constructor
Rectangle::Rectangle(int l, int w)
{
  length = l;
  width = w;
}

// Copy constructor
Rectangle::Rectangle(const Rectangle &rec)
{
  length = rec.length;
  width = rec.width;
}

// Setter method for length
void Rectangle::setLength(int l)
{
  if (l >= 0)
    length = l;
  else
    cout << "Invalid length ";
}

// Setter method for width
void Rectangle::setWidth(int w)
{
  if (w >= 0)
    width = w;
  else
    cout << "Invalid width ";
}

// Calculate area
int Rectangle::area()
{
  return length * width;
}

// Calculate perimeter
int Rectangle::perimeter()
{
  return 2 * (length + width);
}

// Check if square
bool Rectangle::isSquare()
{
  return length == width;
}

// Destructor
Rectangle::~Rectangle() {}

// Main function
int main()
{
  Rectangle rec(10, 15);
  cout << "AREA is = " << rec.area() << endl;
  if (rec.isSquare())
  {
    cout << "YES, It is a square" << endl;
  }
  else
  {
    cout << "NO, It's not a square" << endl;
  }

  return 0;
}
