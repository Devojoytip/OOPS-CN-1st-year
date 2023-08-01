// Sum of n no.s

#include<iostream>
using namespace std;

int sum(int n)
{
    // Base case
    if (n==0)
    {
        return 0;
    }

    // Recursive fn
    int small_value=sum(n-1);
    return n+small_value;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;


return 0;
}