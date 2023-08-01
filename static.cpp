#include<iostream>
using namespace std;

class Student
{
    public:
    int age,id;
    static int total;
};

// setting value of static members:
int Student :: total=100;


int main(){
    Student s1;
    cout<<s1.age<<" "<<s1.id<<endl;
    cout<<s1.total<<endl;

    s1.total=50;

    Student s2;
    cout<<s2.total<<endl;

    // correct way to access member total
    // as it doesn't belong to any object but only the class
    // although it can be changed and accessed using objects 

    cout<<Student::total<<endl;

return 0;
}