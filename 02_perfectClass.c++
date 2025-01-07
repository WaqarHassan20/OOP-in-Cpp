//  CODE TO WRITE A PERFECT CLASS
#include <iostream>
using namespace std;

class Rectangle {
  int length;
  int width;

public:
  Rectangle();
  Rectangle(Rectangle &rec);
  Rectangle(int l, int w);
  int getLength() { return length; };
  int getWidth() { return width; };
  void setLength(int l);
  void setWidth(int w);
  int area();
  int perimeter();
  bool isSquare();
  ~Rectangle();
};
Rectangle::Rectangle() {
  length = 1;
  width = 1;
}
Rectangle::Rectangle(int l,
                     int w) //  Rectangle::Rectangle(int length, int width) //
{
  length = l; // this->length = length;  //
  width = w;  // this->width = width; //
}
Rectangle::Rectangle(Rectangle &rec) {
  length = rec.length;
  width = rec.width;
}
void Rectangle::setLength(int l) {
  if (l >= 0) {
    length = l;
  } else {
    cout << "Invalid length ";
  }
}
void Rectangle::setWidth(int w) {
  if (w >= 0) {
    width = w;
  } else {
    cout << "Invalid width ";
  }
}
int Rectangle::area() { return length * width; }
int Rectangle::perimeter() { return 2 * (length + width); }
bool Rectangle::isSquare() { return length == width; }
Rectangle::~Rectangle() { cout << "Destroyed successfully "; }
int main() {
  Rectangle rec(10, 15);
  cout << "AREA is = " << rec.area() << endl;
  if (rec.isSquare() == true) {
    cout << "YES , It is squared " << endl;
  } else {
    cout << "NO , Its Not squared" << endl;
  }
}
