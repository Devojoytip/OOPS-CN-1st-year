#include<iostream>
using namespace std;

template<typename T>
void swapClass(T &x, T &y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;

}

int main(){
    int x,y;
    char m,n;
    float p,q;
    cin>>x>>y;
    cin>>m>>n;
    cin>>p>>q;
    
    swapClass(x,y);
    swapClass(m,n);
    swapClass(p,q);

    cout<<x<<" "<<y<<endl;
    cout<<m<<" "<<n<<endl;
    cout<<p<<" "<<q<<endl;

return 0;
}