#include <iostream>
using namespace std;

class vehicle
{
private:
    int maxspeed;

public:
    int color;

    void display()
    {
        cout << color << endl;
        cout << numTyres << endl;
        //cout<<maxspeed<<endl; //not accessible
    }
    vehicle()
    {
        cout<<"Vehicle constructor called"<<endl;
    };
    ~vehicle()
    {
        cout<<"vehicle destructor called"<<endl;
    };
protected:
    int numTyres;
};

class car : public vehicle
{
public:
    int numGears;
    void print()
    {
        cout << color << endl;
        cout << numTyres << endl;
        cout << numGears << endl;
        //cout<<maxspeed<<endl; //not accessible
    }
    car() : vehicle()
    // car() is same as car() : vehicle() , not necessary to write now
    {
        cout<<"car constructor called"<<endl;
    };
    ~car()
    {
        cout<<"car destructor called"<<endl;
    };
};

// 1st vehicle constructor called for vehicle class
// For car class 1st vehicle constructor called then car constructor
// Order at which destructors called is opposite to that of constructors

int main()
{
    vehicle v;
    v.color = 10;
    car c;
    v.display();
    c.color = 2;
    //c.numTyres=4; //not accessible
    c.numGears = 5;
    c.print();
    return 0;
}