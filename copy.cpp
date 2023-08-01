#include <iostream>
using namespace std;

class student
{
private:
    /* data */
public:
    int id;
    int age;
    student(int x, int y)
    {
        id=x;
        age=y;
    }
    void display()
    {
        cout << id << "  " << age << endl;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
};

student s1(100, 28);
student* s2= new student(90,25);
student s3(s1);
student s6(*s2);

student* s4= new student(s1);
student* s5= new student(*s2);
student s7(60,30);
student s8(800,32);
student* s9= new student(500,45);



int main()
{
    s1.display();
    s2->display();
    s3.display();
    s6.display();
    s4->display();
    s5->display();
    s7=s1;// copy assignment operator called
    student s10=s8; //Instead of copy assignment operator, copy constructor called here
    s8=*s2;
    s7.display();
    s8.display();
    *s9=s1;
    s9->display();
    //destructors will be called only for statiscally built ones 
    //if u don't delete dynamically ones using delete keyword then only 5 destructors called 
    // delete dynamically built ones by using delete keyword
    //then only destructors will be called by them
    delete s2;
    delete s4;
    delete s5;
    delete s9;
    return 0;
}