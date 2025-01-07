
#include <iostream>
using namespace std;
// ASSIGNMENT QUESTION 0N CLASS STUDENT BY ABDUL BARI
class STUDENT
{
private:
  int rollNo;
  string name;
  int phyMarks;
  int cheMarks;
  int mathMarks;

public:
  STUDENT(int r, string n, int p, int c, int m)
  {
    rollNo = r;
    name = n;
    phyMarks = p;
    cheMarks = c;
    mathMarks = m;
  }

  int totalMarks() { return phyMarks + cheMarks + mathMarks; }

  char grade()
  {
    float average = totalMarks() / 3.0; // Ensure floating-point division
    if (average >= 80)
    {
      return 'A';
    }
    else if (average >= 60 && average < 80)
    {
      return 'B';
    }
    else
    {
      return 'C'; // Ensure this branch always returns a value
    }
  }
};
int main()
{
  int roll, phy, chem, math;
  string name;
  cout << "Enter the roll no of student : ";
  cin >> roll;
  cout << "Enter the name of student : ";
  cin >> name;
  cout << "Enter the marks in Physics : ";
  cin >> phy;
  cout << "Enter the marks in Chemistry : ";
  cin >> chem;
  cout << "Enter the marks in Maths : ";
  cin >> math;
  STUDENT topper(roll, name, phy, chem, math);
  cout << "Total Marks are : " << topper.totalMarks() << endl;
  cout << "Grade of student is : " << topper.grade() << endl;
  return 0;
}