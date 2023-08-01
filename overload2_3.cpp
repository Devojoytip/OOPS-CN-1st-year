#include<iostream>
using namespace std;

class frac
{
    public:
    int n,d;
    frac(int n, int d)
    {
        this->n = n;
        this->d = d;
    };
    void operator+=(frac f)
    {
        int lcm=d*f.d;
        int x=lcm/d;
        int y=lcm/f.d;
        int num=x*n+(y*f.n);
        n=num;
        d=lcm;
        simplify();
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
    void display()
    {
        cout << n << "/" << d<<endl;
    }
};

frac f1(10,3);
frac f2(5,2);
// 10/3 + 5/2 = 35/6

int main(){
    f1.display();
    f2.display();
    f1+=f2;
    f1.display();
    f2.display();

return 0;
}