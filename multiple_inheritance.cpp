#include<iostream>
using namespace std;

class teacher
{
    public:
    string name, age;
    void print()
    {
        cout<<"teacher"<<endl;
    };
};
class student
{
    public:
    string name, age;
    void print()
    {
        cout<<"student"<<endl;
    };
};

class TA : public teacher, public student
{
    public:
    void print()
    {
        cout<<"TA"<<endl;
    }
};

int main(){
    TA a;

    // accessing print fn which is common to both student & teacher

    // accessing print fn of student
    a.student::print();

    // accessing print fn of teacher
    a.teacher::print();

    // accessing print fn of TA
    a.print();

    a.teacher ::name="10AB";

return 0;
}