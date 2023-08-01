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


class car : virtual public vehicle
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

class truck: virtual public vehicle
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
    // using virtual bus directly points the virtual base class of car
    // vehicle class called only once
    
    b.car :: print();
    


    return 0;
}