#include<iostream>
using namespace std;

class line
{
    public:
    int x1,y1;
    int x2,y2;
    int a,b;
    int giveOT()
    {
        a=(2*x1+x2)/3;
        b=(2*y1+y2)/3;
    }
};
int main(){
    int n;
    cin>>n;
    int x1[n],y1[n];
    int x2[n],y2[n];
    int a[n],b[n];
    //int
    for (int i = 0; i < n; i++)
    {
        cin>>x1[i];
        cin>>y1[i];
        cin>>x2[i];
        cin>>y2[i];
        a[i]=(2*x1[i]+x2[i])/3;
        b[i]=(2*y1[i]+y2[i])/3;
    }
    for (int i = 0; i < n; i++)
    {
        if ()
        {
            /* code */
        }
        
    }
    

return 0;
}