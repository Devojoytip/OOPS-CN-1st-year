#include<iostream>
using namespace std;

// since test() not part of any class 
//we need to declare it before compiler reaches to read it from truck class

void test();

class bus
{
    public:
    void print();
};

class truck
{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    friend void bus:: print();
    friend void test();
    
};
void bus::print()
{
    truck t;
    t.x=1;
    t.y=2;
    cout << t.x<<" "<<t.y<<endl;
}
void test()
{
    truck t;
    t.x=10;
    t.y=20;
    cout << t.x<<" "<<t.y<<endl;
}


int main(){
    bus b;
    b.print();
    test();

return 0;
}