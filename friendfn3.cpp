#include<iostream>
using namespace std;

class bus
{
    public:
    void print();
    void print1();
    void print2();
    void print3();
};

class truck
{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    // instead of writing for all print fn to become friend of truck
    // we can make the bus class friend of truck

    friend bus;
    
};
void bus::print()
{
    truck t;
    t.x=1;
    t.y=2;
    cout << t.x<<" "<<t.y<<endl;
}
void bus::print1()
{
    truck t;
    t.x=10;
    t.y=20;
    cout << t.x<<" "<<t.y<<endl;
}

int main(){
    bus b;
    b.print();
    b.print1();
    

return 0;
}