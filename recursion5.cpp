#include<iostream>
using namespace std;

void decreasing(int n)
{
    // Base case
    if (n==0)
    {
        return;
    }
    
    // Recursive fn
    cout << n<<" ";
    decreasing(n-1);
}

int main(){
    int n;
    cin>>n;
    decreasing(n);

return 0;
}