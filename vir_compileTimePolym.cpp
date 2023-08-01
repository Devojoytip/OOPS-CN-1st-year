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

    //diff:

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

    vehicle * v2 = new car;
    v2=&c;

    v1->print();
    v2->print();

    //using virtual keyword now we only call print() of car since v2 is pointing car

return 0;
}