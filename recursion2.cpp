// Fibonacci

#include<iostream>
using namespace std;

int fibo(int n)
{
    // Base case
    if (n==0 || n==1)
    {
        return n;
    }

    // Recursive fn
    int small_value1=fibo(n-1);
    int small_value2=fibo(n-2);
    return small_value1+small_value2;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;

return 0;
}