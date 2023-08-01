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
    virtual void print() = 0;
    // {
    //     cout<<"vehicle"<<endl;
    // }
};
// 2 ways to make a class that inherits pure virtual class
// 1. implement (or complete) all pure virtual fns
// 2. become an abstract class

class car: public vehicle
{
    public:
    car()
    {
        cout<<"car constructor"<<endl;
    };
    void print()
    {
        cout<<"car"<<endl;
    }
    void display(int z)
    {
        cout<<z<<endl;
    }
};

int main(){
    car c;

   
return 0;
}