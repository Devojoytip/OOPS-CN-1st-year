// Check if array is sorted or not

#include<iostream>
using namespace std;

bool is_sorted(int a[],int n)
// here we could also write is_sorted(int a*,int n)
// as a[] stores address of a[0]
{
    // Base case
    if (n==0 or n==1)
    {
        return true;
    }

    // Recursive fn
    if (a[1]>a[0] and is_sorted(a+1,n-1))
    {
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n],s;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    s=sizeof(a)/sizeof(int);
    cout<<is_sorted(a,s)<<endl;

return 0;
}