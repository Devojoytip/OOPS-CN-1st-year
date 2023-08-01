#include<iostream>
using namespace std;

void increasing(int n)
{
    // Base case
    if (n==0)
    {
        return;
    }
    
    // Recursive fn
    increasing(n-1);
    cout << n<<" ";
}

int main(){
    int n;
    cin>>n;
    increasing(n);

return 0;
}






// #include<iostream>
// using namespace std;

// void increasing(int n, int i)
// {
//     // Base case
//     if (n==0)
//     {
//         return;
//     }
    
//     // Recursive fn
//     cout << i<<" ";
//     increasing(n-1,i+1);
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     increasing(n,i);

// return 0;
// }