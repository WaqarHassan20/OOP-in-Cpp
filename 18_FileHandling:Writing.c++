// WRITING A FILE //
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("my.txt", ios::trunc);
    file << "hello" << endl;
    file << 25 << endl;
    file << "CS" << endl;
    file.close();
    return 0;
}
