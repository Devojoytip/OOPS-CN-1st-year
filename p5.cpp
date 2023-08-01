#include<iostream>
using namespace std;
string s[]={"one","two","three","four","five","six","seven","eight","nine"};
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for (int i = n; i <= m; i++)
    {
        if (i<=9)
        {
            cout<<s[i-1]<<endl;
        }
        else
        {
            if (i%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;  
            }    
        }
    } 
return 0;
}