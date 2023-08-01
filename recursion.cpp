// Factorial

#include<iostream>
using namespace std;

int fact(int n)
{
    // Base case
    if (n==0)
    {
        return 1;
    }

    // Recursive fn
    int small_value=fact(n-1);
    return n*small_value;
}

int main(){
    int n;
    cin>>n;
    cout<< fact(n)<<endl;

return 0;
}