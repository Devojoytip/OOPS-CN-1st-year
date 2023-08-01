// Output Format

// Print the N integers of the array in the reverse order, space-separated on a single line.

// Sample Input

// 4
// 1 4 3 2
// Sample Output

// 2 3 4 1


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int y[n];
    for(int i=0;i<n;i++){
        y[i]=x[n-i-1];
        cout<<y[i]<<" ";
    }
       
    return 0;
}