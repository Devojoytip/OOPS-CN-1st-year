#include<iostream>
using namespace std;

//template syntax

template <typename T, typename V>

class pair_class
{
    private:
    T x;
    V y;
    public:
    void setx(T x)
    {
        this->x = x;
    }
    T getx()
    {
        return x;
    }
    void sety(V y)
    {
        this->y = y;
    }
    V gety()
    {
        return y;
    }
};

int main(){
    pair_class<int, int> p2;
    p2.setx(100);
    p2.sety(34);
    cout << p2.getx()<<" "<<p2.gety()<< endl;
    pair_class<pair_class<int,int>, int> p1;
    p1.setx(p2);
    p1.sety(20);
    cout << p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<p1.gety()<< endl;

return 0;
}