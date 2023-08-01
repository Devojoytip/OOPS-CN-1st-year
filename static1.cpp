#include<iostream>
using namespace std;

class Student
{
    public:
    int age,id;
    static int total;

    // diff:

    Student()
    {
        total++;
    }
};

int Student :: total=100;


int main(){
    Student s1;
    // cout<<s1.age<<" "<<s1.id<<endl;
    // cout<<s1.total<<endl;

    // s1.total=50;

    Student s2,s3,s4,s5;
    //cout<<s2.total<<endl;

    cout<<Student::total<<endl;
    cout<<s1.total<<endl;
    cout<<s2.total<<endl;
    cout<<s3.total<<endl;
    cout<<s4.total<<endl;
    cout<<s5.total<<endl;

return 0;
}