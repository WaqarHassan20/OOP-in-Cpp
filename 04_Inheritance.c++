
#include <iostream>
using namespace std;
class rectangle
{
private:
  int length;
  int width;

public:
  rectangle(int l = 0, int w = 0);
  rectangle(rectangle &r);
  void setLength(int l);
  void setWidth(int w);
  int getLength();
  int getWidth();
  int perimeter();
  int area();
};

// rectangle::rectangle(int length,int width) //
rectangle::rectangle(int l, int w)
{
  length = l; // this->length = length;  //
  width = w;  // this->width = width; //
}
rectangle::rectangle(rectangle &rec)
{
  length = rec.length;
  width = rec.width;
}
void rectangle::setLength(int l)
{
  if (l >= 0)
  {
    length = l;
  }
  else
  {
    cout << "Invalid length ";
  }
}
void rectangle::setWidth(int w)
{
  if (w >= 0)
  {
    width = w;
  }
  else
  {
    cout << "Invalid width ";
  }
}
int rectangle::area() { return length * width; }
int rectangle::perimeter() { return 2 * (length + width); }
class cuboid : public rectangle
{
private:
  int height;

public:
  cuboid(int l, int w, int h)
  {
    setLength(l);
    setWidth(w);
    height = h;
  }
  void setHeight(int h);
  int getHeight();
  int volume() { return height * getLength() * getWidth(); }
};
int main()
{
  cuboid c(3, 5, 7);
  cout << "Length is = " << c.getLength() << endl;
  cout << "Height is = " << c.getHeight() << endl;
  cout << "Width is = " << c.getWidth() << endl;
  cout << "Perimeter is = " << c.perimeter() << endl;
  cout << "Volume is = " << c.volume() << endl;
  cout << "Area is = " << c.area() << endl;
  return 0;
}
