#include<iostream>
using namespace std;

class Student
{
    public:
    int age,id;
    static int total;

    Student()
    {
        total++;
    }

    //DIFF:
    // Static fn
    // NOTE: 
    // 1. Static fn can only access static properties (static data members/ static fns)
    // 2. Static fn don't have this pointers(whereas all normal fns have this pointers). 
    // As this pointers hold address of current object
    // Since static fns are not called by objects, so they don't have any value in this pointer

    static int getTotal()
    {
        return total;
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

    cout<<Student::getTotal()<<endl;
    cout<<s2.getTotal()<<endl;

return 0;
}