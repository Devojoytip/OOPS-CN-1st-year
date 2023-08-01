// #include<iostream>
// using namespace std;

// class rectangle
// {
//     public:
//     int w,h;
//     void display()
//     {
//         cout<<h<<endl;
//         cout<<w<<endl;
//     }
//     public:
//     // rectangle(int h,int w)
//     // {
//     //     this->w=w;
//     //     this->h=h;
//     // };

// };

// class rectangle_area: public rectangle
// {
//     public:
//     int area=h*w;
//     void display()
//     {
//         cout<<area<<endl;
//     }
// };

// int main(){
//     int a,b;
//     rectangle r;
//     r.h=b;
//     r.w=a;
//     r.display();
//     rectangle_area r1;
//     r1.display();


// return 0;
// }







#include <iostream>

using namespace std;


class Rectangle
{
    public:
    int w,h;
    virtual void display()
    {
        cout<<w<<" "<<h<<endl;
    }
   
};

class RectangleArea: public Rectangle
{
    public:
    // int area;
    // area=h*w;
    void display()
    {
        cout<<h*w<<endl;
    }
    void read_input()
    {
        cin>>w>>h;
    }
};





int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}