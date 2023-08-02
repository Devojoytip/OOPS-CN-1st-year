#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

class Student
{
private:
    /* data */
public:
    Student(int a, int b, int c)
    {
        cout << "Constructor called" << endl;
    }

    Student(int a, int b)
    {
        cout << "Constructor 2 called" << endl;
    }
};

int main()
{
    Student s1(10, 20, 30);

    return 0;
}
