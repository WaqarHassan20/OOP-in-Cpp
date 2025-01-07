#include <iostream>
using namespace std;

// COMPLETE CLASS OF COMPLEX NAME
class complex {
private:
  int real;
  int img;

public:
  complex(int r = 0, int i = 0) {
    real = r;
    img = i;
  }

  friend complex operator+(complex c1, complex c2);
  friend ostream &operator<<(ostream &out, complex &com);

  void display() { cout << real << " + " << img << "i" << endl; }
};

ostream &operator<<(ostream &out, complex &com) {
  out << com.real << " + " << com.img << "i";
  return out; // Return the ostream object
}

complex operator+(complex c1, complex c2) {
  complex temp;
  temp.real = c1.real + c2.real;
  temp.img = c1.img + c2.img;
  return temp;
}

int main() {
  complex c1(3, 6);
  complex c2(2, 4);
  complex c3;
  c3 = c1 + c2;
  c3.display();

  complex cc1(10, 5);
  complex cc2(6, 7);
  complex cc3;
  cc3 = cc2 + cc1;
  cout << cc3 << endl;
  return 0;
}
