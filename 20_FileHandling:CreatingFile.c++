// CREATING FILE AND WRITING IN THAT FILE //
#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    string dept;
};
int main()
{
    student s1;
    s1.name = "WAQAR";
    s1.rollno = 1;
    s1.dept = "CS";
    ofstream file("student.txt", ios::app);
    file << s1.name << endl;
    file << s1.rollno << endl;
    file << s1.dept << endl;
    file.close();
    return 0;
}
