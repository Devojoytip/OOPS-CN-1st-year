#include<iostream>
using namespace std;

int digits(int n)
{
    int counterr=1;
    if (n>=0)
    {
        n=n/10;
        return 1+digits(n);
    }
}
int main(){
    int x;
    cout << "Value of x: "<<endl;
    cin>>x;
    cout<<digits(x);

return 0;
}

