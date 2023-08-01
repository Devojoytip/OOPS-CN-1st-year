#include<iostream>
using namespace std;

class complex
{
    public:
    int a;
    int b;
    complex(){

    };
    complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    };
    void display()
    {
        cout << a<<" + i"<<b<<endl;
    }
    void multiply(complex const& c)
    {
        int temp=a;
        a=(a*(c.a))-(b*(c.b));
        b=(temp*(c.b))+(b*(c.a));
    }
};

complex c1;
complex c2;

int main(){
    cout << "Enter a"<<endl;
    cin >> c1.a>>c2.a;
    cout << "Enter b"<<endl;
    cin >> c1.b>>c2.b;
    c1.display();
    c2.display();
    c1.multiply(c2);
    c1.display();
return 0;
}