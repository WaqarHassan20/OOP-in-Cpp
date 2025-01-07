// AGAIN SAME ASSIGNMENT  GIVEN BELOW OF RATIONAL NUMBERS BUT USING SCOPE
// RESOLUTION OPERATOR

#include <iostream>
using namespace std;

class rational {
private:
  int p;
  int q;

public:
  rational();
  rational(int p, int q);
  rational(rational &r);
  void setP(int p);
  void setQ(int q);
  int getP();
  int getQ();
  rational operator+(rational r);
  friend ostream &operator<<(ostream &out, rational &r);
};
ostream &operator<<(ostream &out, rational &r) {
  out << r.p << "/" << r.q << endl;
  return out;
}
rational::rational() {
  p = 1;
  q = 1;
}
rational::rational(int p, int q) {
  this->p = p;
  this->q = q;
}
rational::rational(rational &r) {
  this->p = r.p;
  this->q = r.q;
}
void rational::setP(int p) { this->p = p; }
void rational::setQ(int q) { this->q = q; }
int rational::getP() { return p; }
int rational::getQ() { return q; }
rational rational::operator+(rational r) {
  rational t;
  t.p = this->p * r.q + this->q * r.p;
  t.q = this->q * r.q;
  return t;
}
int main() {
  rational r1(3, 5), r2(7, 9), r3;
  r3 = r1 + r2;
  cout << r3;
}
