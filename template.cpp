#include<iostream>
using namespace std;

//template syntax

template <typename T>

class pair_class
{
    private:
    T x;
    T y;
    public:
    void setx(T x)
    {
        this->x = x;
    }
    T getx()
    {
        return x;
    }
    void sety(T y)
    {
        this->y = y;
    }
    T gety()
    {
        return y;
    }
};

int main(){
    pair_class<int> p1;
    p1.setx(10);
    p1.sety(20);
    cout << p1.getx()<<" "<<p1.gety()<< endl;
    pair_class<double> p2;
    p1.setx(100.34);
    p1.sety(34.21);
    cout << p2.getx()<<" "<<p2.gety()<< endl;

return 0;
}
