// FILE READING CODE, END OF FILE, CHECKING ALL //
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("my.txt");
    if (file)
    {
        cout << "File is opened ." << endl;
    }
    string str;
    int rollNo;
    file >> str >> rollNo;
    if (file.eof())
    {
        cout << "End of file " << endl;
    }
    file.close();
    cout << str << "  " << rollNo << endl;
    return 0;
}
