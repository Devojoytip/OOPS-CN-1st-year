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

    //diff:

    virtual void print()
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
    // c.print();
    // c.display(5);
    // v.print();
    
    vehicle * v1=new vehicle;

    vehicle * v2 = new car;
    v2=&c;

    v1->print();
    v2->print();

    //using virtual keyword now we only call print() of car since v2 is pointing car


return 0;
}



// run-time polymorphism
// #include<iostream>
// using namespace std;

// class vehicle
// {
//     public:
//     int a,b;
//     virtual void get(){};
//     virtual void zValue(){
//         //return 0;
//     };
//     // vehicle()
//     // {
//     //     cout<<"Vehicle constructor"<<endl;
//     // };

//     //diff:

//     // virtual void print()
//     // {
//     //     cout<<"vehicle"<<endl;
//     // }
// };

// class car: public vehicle
// {
//     public:
//     int z=a+b;
//     void get()
//     {
//         cout<<"Enter a"<<endl;
//         cin>>a;
//         cout<<"Enter b"<<endl;
//         cin>>b;
//         //cin>>z;
//     }
//     void zValue()
//     {
//         int z=a+b;
//         cout<<z<<endl;
//     }
//     // int zValue()
//     // {
//     //     return z;
//     // }
//     // car()
//     // {
//     //     cout<<"car constructor"<<endl;
//     // };
//     // void print()
//     // {
//     //     cout<<"car"<<endl;
//     // }
//     // void display(int z)
//     // {
//     //     cout<<z<<endl;
//     // }
// };

// int main(){
//     vehicle *v= new car;
//     //car c;
//     //v=&c;
//     v->get();
//     v->zValue();
//     //c.zValue();
//     // c.print();
//     // c.display(5);
//     // v.print();
    
//     // vehicle * v1=new vehicle;

//     // vehicle * v2 = new car;
//     // v2=&c;

//     // v1->print();
//     // v2->print();

//     //using virtual keyword now we only call print() of car since v2 is pointing car


// return 0;
// }