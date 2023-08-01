#include <iostream>
using namespace std;

class vehicle
{
private:
    int maxspeed;

protected:
    int numtyres;

public:
    string color;

    void print()
    {
        cout<<"Vehicle"<<endl;
        // cout << color << endl;
        // cout << numtyres << endl;
        //cout<<maxspeed<<endl; //not accessible
    }
    vehicle()
    {
        cout << "Vehicle constructor called" << endl;
    };
    vehicle(int n)
    {
        cout << "Parameterised vehicle constructor called" << endl;
        maxspeed = n;
    };
    ~vehicle()
    {
        cout << "vehicle destructor called" << endl;
    };
};


class car : public vehicle
{
public:
    int numGears;
    // void print()
    // {
    //     cout << "color : "<< color << endl;
    //     cout << "numtyres : "<< numtyres << endl;
    //     cout << "numGears : "<< numGears << endl;
    // }

    car()
    {
        cout<<"car constructor called"<<endl;
    };
    // car(int x, int y):vehicle(5)
    // {
    //     cout<<"car constructor called"<<endl;
    //     numGears=y;
    // };
    ~car()
    {
        cout<<"car destructor called"<<endl;
    };
};

class truck: public vehicle
{
    public:
    truck()
    {
        cout<<"truck constructor"<<endl;
    };
    ~truck()
    {
        cout<<"truck desstructor"<<endl;
    };

};

class bus: public car, public truck
{
    public:
    bus()
    {
        cout<<"bus constructor"<<endl;
    };
    ~bus()
    {
        cout<<"bus desstructor"<<endl;
    };
};

//                           vehicle
//                           /      \
//                          car     truck
//                            \      /
//                              bus
int main()
{
    bus b;

    // now to use print() there's issue that both car, truck have in them vehicle class
    // thus 2 copies of vehicle class are there in bus
    // thus 2 copies of print() vehicle class are there in bus
    // 2 ways to solve:
    // 1. make print() (of course- public) in bus class itself
    // 2. explicitly specify the print() of which class u want

    //b.print();
    // shows error
    
    b.car :: print();
    // order is first checks for print() in bus, then car, then vehicle

    return 0;
}