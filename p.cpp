#include <iostream>
using namespace std;

class customer
{
public:
    char name[10], pan[10], num[11], gender;
    void get()
    {
        if (name[1] != '.')
        {
            exit(0);
        }
        if (num[0] != '0')
        {
            cout << "Invalid" << endl;
            exit(0);
        }
        cin >> name >> pan >> num >> gender;
    }
};

class deposit : public customer
{
public:
    char ac[10];
    int bal;

    void get1()
    {
        cin >> ac >> bal;
    }
};

class borrow : public deposit
{
public:
    char choice;
    int l_amt;
    char l_no[10];
    void get2()
    {
        if (choice == 'y' || choice == 'Y')
        {
            if (l_no != ac)
            {
                cout << "Invalid" << endl;
                exit(0);
            }
            cin >> l_amt >> l_no;
            bal = bal + l_amt;
        }
    }
};
class display : public borrow
{
public:
    void print()
    {
        get();
        get1();
        get2();
        cout << name << pan << num << gender <<ac<<bal<< endl;
    }
};
int main()
{
    int n;
    cin >> n;
    display d[n];
    for (int i = 1; i <= n; i++)
    {
        d[i].print();
    }

    return 0;
}