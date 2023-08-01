// Taking 4 input values- 2 hours and 2 minutes
#include <iostream>
using namespace std;

class time
{
public:
    int h;
    int m;
    time()
    {
        int h1, m1;
        cout << "Enter hours" << endl;
        cin >> h1;
        cout << "Enter minutes" << endl;
        cin >> m1;
        if (h1 >= 0 && m1 >= 0)
        {

            this->h = h1;
            this->m = m1;
        }
        else
        {
            cout << "Enter correct value of hours" << endl;
        }
    };
    time(int a, int b)
    {
        if (a >= 0 && b >= 0 )
        {

            this->h = a;
            this->m = b;
        }
        else
        {
            cout << "Enter correct value of hours" << endl;
        }
    };
    void print()
    {
        cout << this->h << " hours " << this->m <<" minutes"<< endl;
    }
    time operator+(time const &t2)
    {
        m = m + t2.m;
        h = h + t2.h;
        // if (m = 60)
        // {
        //     m = 0;
        //     h++;
        // }
        if (m >= 60)
        {
            //m = m - 60;
            int temp, flag;
            temp = m / 60;
            flag = m % 60;
            h=h+temp;
            m=flag;
            // if (temp > 1 && flag > 0)
            // {
            //     h = h + temp;
            // }
            // else
            // {
            //     h = h + flag;
            // }
        }
        time t4(h,m);
        print();
        return t4;
    
    }
};

int main()
{
    time t;
    t.print();
    time t1;
    t1.print();
    time t3=t+t1;
    //t3.print();

    return 0;
}