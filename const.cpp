#include <iostream>
using namespace std;

class student
{
private:
    /* data */
public:
    int id;
    int age;
    student()
    {
        cout << "Constructor 1 called" << endl;
        cout << "Default id is " << id << endl;
        cout << "Default age is " << age << endl;
    }
    student(int x)
    {
        cout << "Constructor 2 called" << endl;
        id = x;
        cout << "Id is " << x << endl;
    }
    student(int m, int n)
    {
        cout << "Constructor 3 called" << endl;
        id = m;
        age = n;
        cout << "Id is " << m << endl;
        cout << "Age is " << n << endl;
    }
    void display()
    {
        cout << "Id is " << id <<" Age is "<<age<<endl;
    }
};

//statiscally
student s1;
student s2(200);

//dynamically

student *s3 = new student;

student *s4 = new student(1002, 26);

int main()
{
s1.display();

s4->display();


    return 0;
}