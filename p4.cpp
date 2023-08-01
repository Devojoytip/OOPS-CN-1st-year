#include<iostream>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};


int main(){
    int n;
    cin>>n;
    if (n>9)
    {
        cout<<"Greater than 9"<<endl;
    }
    else
    {
        cout<<s[n]<<endl;
    }
    
    
return 0;
}





