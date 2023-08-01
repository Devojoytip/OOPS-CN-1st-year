#include <iostream>
using namespace std;

class fraction
{
private:
    /* data */
public:
    int n;
    int d;
    fraction(int n, int d)
    {
        this->n = n;
        this->d = d;
    };
    ~fraction(){};
    void print()
    {
        cout << n << "/" << d << endl;
    }
    void add(fraction f2)
    {
        int lcm = d * (f2.d);
        int final_d = lcm;
        int x = lcm / d;
        int y = lcm / f2.d;
        n = n * x;
        f2.n = y * (f2.n);
        int final_n = (f2.n) + n;
        n = final_n;
        d = final_d;
    }
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
};
fraction f1(10, 2);
fraction f2(15, 4);
int main()
{
    f1.print();
    f2.print();
    f1.add(f2);
    f1.print();
    f1.simplify();
    f1.print();

    return 0;
}