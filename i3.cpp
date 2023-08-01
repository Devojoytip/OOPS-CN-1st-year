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
    }
    vehicle()
    {
        cout<<"Vehicle constructor called"<<endl;
    };
    //diff:
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
        
    }
    car():vehicle(5)
    {
        cout<<"car constructor called"<<endl;
    };
    ~car()
    {
        cout<<"car destructor called"<<endl;
    };
};

int main()
{
    vehicle v;
    
    car c;
    v.display();
    c.color = 2;
    
    c.numGears = 3;
    c.print();
    return 0;
}