#include<iostream>
#include<climits>
using namespace std;

int main(){
    int r,c;
    char a[10][10];
    cin>>r>>c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    int c1,r1;
    for (int i = 0; i < r; i++)
    {
        for (int i = 0; i < r; i++)
        {
            if (a[i][c1]=='r' && a[i][c1+1]=='r')
            {
                cout<<r<<endl;
            }
            
        }
        
        
    }
    
    
    
    

return 0;
}