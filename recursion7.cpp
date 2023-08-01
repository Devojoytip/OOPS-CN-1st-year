#include<iostream>
using namespace std;

string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void words(int n)
{
    if (n==0)
    {
        return;
    }
    words(n/10);
    int m=n/10;
    cout<<s[m/10]<<" ";
}

int main(){
    int n;
    cin>>n;
    words(n);

return 0;
}