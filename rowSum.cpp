#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,a[10][10];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int s=INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (s<a[i][j])
            {
                s=a[i][j];
            }
        }
        cout<<s<<endl;
    }
    

return 0;
}