#include <iostream>
using namespace std;
class student
{
public:
    int rollNo;
    string name;
    static int count;
    student(string name)
    {
        count++;
        rollNo = count;
        this->name = name;
    }
    void display()
    {
        cout << "NAME = " << name << endl
             << "ROLL NO = " << rollNo << endl;
    }
};
int student ::count = 0;
int main()
{
    student s1("WAQAR");
    s1.display();
    student s2("RAVI");
    s2.display();
    student s3("KHAN");
    s3.display();
    cout << endl;
    cout << "TOTAL ADMISSSIONS ARE = " << student::count << endl;
    return 0;
}
