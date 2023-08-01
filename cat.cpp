#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double v,r1,r2,except;
    cin>>v>>r1>>r2;
    try
    {
        if (r1==0 || r2==0)
        {
            throw except;
        }
        else
        {
            double x=(r1*r2)/(r1+r2);
            cout<<fixed<<setprecision(2)<<v/x<<endl;
        }
        
    }
    catch(double x)
    {
        cout<<"zero not allowed"<<endl;
    }
return 0;
}