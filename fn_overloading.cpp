#include<iostream>
using namespace std;

int test(){}

int test(int a){}

int test(int a, int b){}

// A compiler cannot overload functions distinguished by return type alone
// functions are distinguished on basis of:
// 1. name  
// 2. no of arguements
// and not by return types

//void test(){}

int main(){

return 0;
}