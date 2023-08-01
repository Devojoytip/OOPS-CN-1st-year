// #include<iostream>
// using namespace std;

// class Person
// {
//     public:
//     char Name[100];
//     int SSN;
//     void get()
//     {
//         cin>>Name;
//         cin>>SSN;
//     }
//     void display()
//     {
//         cout<<Name<<endl;
//         cout<<SSN<<endl;
//     }
// };

// class Account : public Person
// {
//     public:
//     int Pay;
//     void get()
//     {
//         cin>>Pay;
//     }
//     void display()
//     {
//         cout<<Pay<<endl;
//     }
// };

// class Admin : public Person
// {
//     public:
//     int Experience;
//     void get()
//     {
//         cin>>Experience;
//     }
//     void display()
//     {
//         cout<<Experience<<endl;
//     }
// };

// class Master : public Account, public Admin
// {
//     public:
//     void display()
//     {
//         Person::display();
//         Account::display();
//         Admin::display();
//     }

// };

// int main(){

// return 0;
// }

#include <iostream>
#include <stdlib.h>
#define MAX 10
using namespace std;
class Person
{
protected:
    char name[100];
    int SSN;

public:
    Person()
    {
        cin >> name;
        cout << "\n";
        cin >> SSN;
        cout << "\n";
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "SSN: " << SSN << endl;
    }
};
class Account : virtual Person
{
protected:
    int pay;

public:
    Account()
    {
        cin >> pay;
        cout << "\n";
    }
    void display()
    {
        cout << "Pay: " << pay << endl;
    }
};
class Admin : virtual Person
{
protected:
    int exp;

public:
    Admin()
    {
        cin >> exp;
        cout << "\n";
    }
    void display()
    {
        Person::display();
        cout << "Experience: " << exp << endl;
    }
};
class Master : public Account,public  Admin
{
public:
    void display()
    {
        Account::display();
        Admin::display();
    }
};
int main()
{
    Master m;
    m.display();
}
