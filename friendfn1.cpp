#include<iostream>
using namespace std;

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
    
};
void bus::print()
{
    truck t;
    t.x=1;
    t.y=2;
    cout << t.x<<" "<<t.y<<endl;
}


int main(){
    bus b;
    b.print();

return 0;
}