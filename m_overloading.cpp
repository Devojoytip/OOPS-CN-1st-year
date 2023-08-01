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
};

class car: public vehicle
{
    public:
    car()
    {
        cout<<"car constructor"<<endl;
    };
};

int main(){

return 0;
}