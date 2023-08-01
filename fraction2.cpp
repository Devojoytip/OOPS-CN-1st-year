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
    void add(fraction const &f)  //using constant reference
    {
        n = n * f.n;
        d = d * f.d;

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
    f1.add(f2);
    f1.simplify();
    f1.display();
    return 0;
}



// #include <iostream>
// using namespace std;

// class fraction
// {
// public:
//     int n;
//     int d;
//     fraction(int n, int d)
//     {
//         this->n = n;
//         this->d = d;
//     };
//     void display()
//     {
//         cout << n << "/" << d<<endl;
//     }
//     fraction add(fraction const &f)  //using constant reference
//     {
//         n = n * f.n;
//         d = d * f.d;
//         fraction fnew(n,d);
//         fnew.simplify();
//         return fnew;

//     }
//     void simplify()
//     {
//         int gcd=1;
//         int j= min(n,d);
//         for (int i = 1; i <= j; i++)
//         {
//             if ((n%i==0)&&(d%i==0))
//             {
//                 gcd=i;
//             }
//         }
//         n=n/gcd;
//         d=d/gcd;
//     }
// };

// fraction f1(5, 4);
// fraction f2(10, 4);


// int main()
// {
//     f1.display();
//     f2.display();
//     fraction f3=f1.add(f2);
//     f1.simplify();
//     f1.display();
//     return 0;
// }