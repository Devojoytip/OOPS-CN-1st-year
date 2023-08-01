// compile-time polymorphism
#include<iostream>
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"Vehicle constructor"<<endl;
    };
    void print()
    {
        cout<<"vehicle"<<endl;
    }
};

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
    vehicle v;
    car c;
    c.print();
    c.display(5);
    v.print();
    
    vehicle * v1=new vehicle;
    vehicle * v2;
    // we can use vehicle type pointer of a base class to point to its child class
    // but vice-versa not allowed
    // also we can access only fns of base class not of child class
    // thus,     v2->display(5);   will not work

    v2=&c;
    v2->print();

return 0;
}