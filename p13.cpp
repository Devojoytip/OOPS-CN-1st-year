// #include<iostream>
// using namespace std;

// class shape
// {
//     public:
//     float h,b;
//     // void get()
//     // {
//     //     cout<<"Enter height"<<endl;
//     //     cin>>h;
//     //     cout<<"Enter base"<<endl;
//     //     cin>>b;
//     // }
//     virtual void Area()=0;
//     virtual void get()=0;
// };

// class triangle: public shape
// {
//     public:
//     void get()
//     {
//         cout<<"Enter height"<<endl;
//         cin>>h;
//         cout<<"Enter base"<<endl;
//         cin>>b;
//     }
//     void Area()
//     {
//         //int area=0.5*h*b;
//         cout<<"Area of triangle is :"<<0.5*h*b<<endl;
//         //return 0.5*h*b;
//     }
// };

// class rect: public shape
// {
//     public:
//     void get()
//     {
//         cout<<"Enter height"<<endl;
//         cin>>h;
//         cout<<"Enter base"<<endl;
//         cin>>b;
//     }
//     void Area()
//     {
//         //int area=h*b;
//         cout<<"Area of rectangle is :"<<h*b<<endl;
//         //return h*b;
//     }
// };

// int main(){
//     // shape *s1,s2;
//     // //s1=&s2;
    
//     // rect r;
//     // //r.Area();
//     // s1=&r;
//     // s1->get();
//     // s1->Area();
//     // //s1=&r;
//     // // s1->get();
//     // // s1->Area();

//     // // r.get();
//     // // r.Area();
//     // triangle t;
//     // t.Area();
//     // // s1=&t;
//     // // s1->get();
//     // // s1->Area();
//     // // t.get();
//     // // t.Area();

//     shape *s=new rect;
//     shape *s1=new triangle;
//     rect r;
//     triangle t;
//     s=&r;
//     s1=&t;
//     s->get();
//     s->Area();
//     s1->get();
//     s1->Area();

    

// return 0;
// }








#include<iostream>
using namespace std;

class shape
{
    public:
    float h,b;
    // void get()
    // {
    //     cout<<"Enter height"<<endl;
    //     cin>>h;
    //     cout<<"Enter base"<<endl;
    //     cin>>b;
    // }
    virtual float Area()=0;
    virtual void get()=0;
};

class triangle: public shape
{
    public:
    void get()
    {
        cout<<"Enter height"<<endl;
        cin>>h;
        cout<<"Enter base"<<endl;
        cin>>b;
    }
    float Area()
    {
        //int area=0.5*h*b;
        return 0.5*h*b;
        //return 0.5*h*b;
    }
};

class rect: public shape
{
    public:
    void get()
    {
        cout<<"Enter height"<<endl;
        cin>>h;
        cout<<"Enter base"<<endl;
        cin>>b;
    }
    float Area()
    {
        //int area=h*b;
        return h*b;
        //return h*b;
    }
};

int main(){
    // shape *s1,s2;
    // //s1=&s2;
    
    // rect r;
    // //r.Area();
    // s1=&r;
    // s1->get();
    // s1->Area();
    // //s1=&r;
    // // s1->get();
    // // s1->Area();

    // // r.get();
    // // r.Area();
    // triangle t;
    // t.Area();
    // // s1=&t;
    // // s1->get();
    // // s1->Area();
    // // t.get();
    // // t.Area();

    shape *s=new rect;
    shape *s1=new triangle;
    rect r;
    triangle t;
    s=&r;
    s1=&t;
    s->get();
    s->Area();
    s1->get();
    s1->Area();

    

return 0;
}


// #include <iostream>
// using namespace std;

// class shape
// {
// protected:
//     double s1, s2;

// public:
//     void get()
//     {
//         cout << "Enter the base length: ";
//         cin >> s1;
//         cout << "Enter the height: ";
//         cin >> s2;
//     }

//     virtual double displayArea()
//     {
//         return 0.0;
//     }
// };

// class triangle : public shape
// {
// public:
//     double displayArea()
//     {
//         return ((s1 * s2) / 2);
//     }
// };

// class rectangle : public shape
// {
// public:
//     double displayArea()
//     {
//         return (s1 * s2);
//     }
// };

// int main()
// {
//     shape *s1;
//     triangle t;
//     rectangle r;
//     s1 = &t;
//     s1->get();
//     cout << "\nThe area of the triangle is: " << s1->displayArea();
//     cout << "\n";
//     s1 = &r;
//     s1->get();
//     cout << "\nThe area of the rectangle is: " << r.displayArea();
//     return 0;
// }