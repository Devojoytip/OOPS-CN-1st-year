#include<iostream>
using namespace std;

class truck
{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    // friend fn declaration
    friend void bus:: print();
    // u can write this synax(or declare friend fn) under any access modifier(public, private, protected)
    // although syntax is right but it will show error
    // since compiler reads the code from top although executes from main
    // thus it will not identify bus class and show error there
    // the compiler then doesn't look down to search for bus
    // we need to define bus class before truck class
    
};

class bus
{
    public:
    void print();
};

int main(){

return 0;
}