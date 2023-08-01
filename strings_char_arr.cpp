#include<iostream>
#include<string.h>
using namespace std;


int main(){
    char c[100]="Ram is good. 1.*%$#@!00";
    cout << c<<endl;
    cout << c[2]<<c[80]<<endl;
    cout << strlen(c)<<endl;

    char c='';

    //            error:
    //char c1[100]='Ram is good. 1.*%$#@!00';

    //            error:
    //char [1]="c"; 
    // since 1 space is needed for storing null(\0)


    string s="Ram is good. 1.*%$#@!00";
    cout << s<<endl;
    cout << s[2]<<endl;
    cout << s.length()<<endl;

    
    
return 0;
}