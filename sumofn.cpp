#include<iostream>
using namespace std;

int sum(int n)
{
    int summation=0;
    if (n<=0)
    {
        return 0;
    }
    for (int i = 0; i <= n; i++)
    {
        summation=n+sum(n-1);
    }

    return summation;
    
}
int main(){
    int n;
    cout << "Value of n is"<<endl;
    cin>>n;
    cout << sum(n)<<endl;
return 0;
}