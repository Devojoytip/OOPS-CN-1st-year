// run-time polymorphism
#include<iostream>
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"Vehicle constructor"<<endl;
    };

    // diff:
    // pure virtual class

    virtual void print() = 0;
    // {
    //     cout<<"vehicle"<<endl;
    // }
};

// a class having pure virtual class is called ABSTRACT class
// such a class cann't have an object since its pure virtual fn are incomplete

class car: public vehicle
{
    public:
    car()
    {
        cout<<"car constructor"<<endl;
    };
    // void print()
    // {
    //     cout<<"car"<<endl;
    // }
    void display(int z)
    {
        cout<<z<<endl;
    }
};

int main(){

    //vehicle v;
    // car c;

    // vehicle v; and car c; will show error
    // to make an object we have 2 ways:
    // 1. implement all the pure virtual fn
    // 2. become an abstract c


return 0;
}