#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;


int main(){
    ofstream write_myFile("file2.txt");
    string name;
    cout<<"Enter ur name: ";
    cin >>name;
    //myFile<<name;
    write_myFile<<"My Name is "+name;
    write_myFile.close();

    ifstream read_myFile("file2.txt");
    string content;
    //read_myFile>>content;
    getline(read_myFile,content);
    cout<<"Content of file is: "<<content;

return 0;
}