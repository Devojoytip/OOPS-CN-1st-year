#include<bits/stdc++.h>
using namespace std;

#include "Vehicle.cpp"
#include "Car.cpp"
#include "Bike.cpp"

int main()
{
    Vehicle v;
    v.name = "Vehicle 1";
    v.print();

    Car c;
    c.print();

    Vehicle *v1 = new Vehicle;
    Vehicle *v2 = new Car;
    Vehicle *v3 = new Bike;

    v1->print();
    v2->print();
    v3->print();

    // v3->printCar(); // Error

    return 0;
}
