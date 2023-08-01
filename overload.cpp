#include <iostream>
using namespace std;

class fraction
{
public:
    int n;
    int d;
    fraction(int n, int d)
    {
        this->n = n;
        this->d = d;
    };
    void display()
    {
        cout << n << "/" << d<<endl;
    }
    fraction operator*(fraction const &f)  //using constant reference
    {
        int n1 = n * f.n;
        int d1 = d * f.d;
        fraction fnew(n1,d1);
        fnew.simplify();
        return fnew;

    }
    fraction operator/(fraction const &f)
    {
        int n1=n * f.d;
        int d1=d * f.n;
        fraction fnew(n1,d1);
        fnew.simplify();
        return fnew;
    }
    void simplify()
    {
        int gcd=1;
        int j= min(n,d);
        for (int i = 1; i <= j; i++)
        {
            if ((n%i==0)&&(d%i==0))
            {
                gcd=i;
            }
        }
        n=n/gcd;
        d=d/gcd;
    }
};

fraction f1(5, 4);
fraction f2(10, 4);


int main()
{
    f1.display();
    f2.display();
    fraction f3=f1*f2;
    fraction f4=f1/f2;
    f1.simplify();
    f1.display();
    f3.display();
    f4.display();
    return 0;
}