#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    int small_output=factorial(n-1);
    int output=n*small_output;
    return output;
}

int main(){
    cout<<factorial(4)<<endl;
    return 0;
}