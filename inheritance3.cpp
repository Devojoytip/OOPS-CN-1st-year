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
    vehicle (int n)
    {
        cout<<"Parameterised vehicle constructor called"<<endl;
        color=n;
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
    //diff :
    car(int x, int y):vehicle(5)
    {
        cout<<"Parameterised car constructor called"<<endl;
        numGears=y;
    };
    ~car()
    {
        cout<<"car destructor called"<<endl;
    };
};

class honda : public car
{
    public:

    //diff :
    honda() : car(5,10)
    {
        cout<<"honda constructor called"<<endl;
    };

    ~honda()
    {
        cout<<"honda destructor called"<<endl;
    };
};

int main()
{
    honda h;
    // vehicle v;
    // // v.color = 10;
    // car c;
    // v.display();
    // c.color = 2;
    // //c.numTyres=4; //not accessible
    // c.numGears = 3;
    // c.print();
    // return 0;
}