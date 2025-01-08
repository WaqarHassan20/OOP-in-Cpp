#include <iostream>
using namespace std;
class car
{
public:
    virtual void start()
    {
        cout << "Car started ." << endl;
    }
    virtual void stop()
    {
        cout << "Car stopped" << endl;
    }
};
class inova : public car
{
public:
    void start()
    {
        cout << "Inova started ." << endl;
    }
    void stop()
    {
        cout << "Inova stopped";
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "Swift started ." << endl;
    }
    void stop()
    {
        cout << "Swift stopped";
    }
};
int main()
{
    car *c = new swift(); // AND AFTER SWIFT CHANGE IT TO INOVA //
    c->start();
    c->stop();
    return 0;
}
