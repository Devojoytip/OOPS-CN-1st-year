// Construct a base class media and which can be inherited by the classes Book and CD-Tape.  Following are the member variables of the class
// media has title , price
// Book has pages
// CD-Tape has time
// Initialize the Book and CD-Tape  by creating the object with the help of constructor ( this constructor can provide the value to base class also)   ie. Book_object can receive “Book Title”, pages, price as parameters.  Like way CD-Tape can receive “CD-Title”, time, price as parameters.
// Use the Object Oriented Concepts in cpp to write a program for the given problem statement and display the Book and CD-Tape details with the help of virtual functions.
#include<iostream>
#include<string.h>
using namespace std;

class media {
    protected:
    char title[20];
    float price;
    public:
    media(char *s , float p){
        strcpy(title,s);
        price = p;
    }
    virtual void display(){}
};

class book: public media {
    protected:
    int pages;
    public:
    book(char *s , int page , float p): media(s,p){
        pages = page;
    }

    void display(){
        cout<<"Book details\n";
        cout<<title<<"\n"<<pages<<"\n"<<price<<endl;
    }
};

class cdTape: public media {
    int time;
    public:
    cdTape(char *s , int t , float p): media(s,p) {
        time = t;
    }

    void display(){
        cout<<"CD details\n";
        cout<<title<<"\n"<<time<<"\n"<<price<<endl;
    }
};

int main()
{
    book b("C++" , 200 , 600);
    cdTape cd("C++ tape" , 40 , 300);
    media *m[2];
    m[0] = &b;
    m[1] = &cd;
    m[0]->display();
    m[1]->display();
    return 0;
}