#include <iostream>
using namespace std;

class frac
{
public:
    int n, d;
    frac(int n, int d)
    {
        this->n = n;
        this->d = d;
    };
    void simplify()
    {
        int gcd = 1;
        int j = min(n, d);
        for (int i = 1; i <= j; i++)
        {
            if ((n % i == 0) && (d % i == 0))
            {
                gcd = i;
            }
        }
        n = n / gcd;
        d = d / gcd;
    }
    void display()
    {
        cout << n << "/" << d << endl;
    }
    frac operator++()
    {
        n = n + d;
        simplify();
        return *this; //returning the whole content of this pointer
        
    }
};

frac f1(20,10);


int main()
{
    f1.display();
    frac f2= ++f1;
    f1.display();
    f2.display();
    return 0;
}