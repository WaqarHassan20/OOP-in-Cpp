// OPERATOR OVERLOADING IN FILES USING CLASS OBJECTS //
#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    string dept;
    friend ofstream &operator<<(ofstream &ofs, student &s);
    friend ifstream &operator>>(ifstream &ifs, student &s);
};
ofstream &operator<<(ofstream &ofs, student &s)
{
    ofs << s.name << endl;
    ofs << s.rollno << endl;
    ofs << s.dept << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, student &s)
{
    ifs >> s.name;
    ifs >> s.rollno;
    ifs >> s.dept;
    return ifs;
}
int main()
{
    student s1;
    s1.name = "WAQAR";
    s1.rollno = 1;
    s1.dept = "CS";
    ofstream file("student.txt", ios::app);
    file << s1;
    file.close();
    return 0;
}
