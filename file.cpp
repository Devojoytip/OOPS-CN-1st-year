#include<iostream>
#include<fstream>
using namespace std;

// In order to work with files in C++, we need to open them
// Primarilt there are 2 ways to open a file
// 1. using constructor
// 2. using member fn open() of the class

int main(){
    string s1="hello world";
    string s2="working with cpp";

    // opening file using constructor

    ofstream open_my_file("file.txt"); 
    //writing in file
    open_my_file<<s1;

    // reading a file

    ifstream open_my_file1("file1.txt");
    //open_my_file1>>s2;
    getline(open_my_file1,s2);
    cout<<s2;

return 0;
}