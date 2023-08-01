#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[3];
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[j];
            for (int i = 0; i < 3; i++)
            {
                int temp=0;
                int flag=0;
                if (arr[i]>=temp)
                { 
                    temp=arr[i];
                }
                //cout<<temp<<endl;
                for (int x = 0; x < 3; x++)
                {
                    if (arr[i]>=flag && !(flag==temp))
                {
                    flag=arr[i];
                }
                cout<<flag<<endl;  
                }
            }
        }
    }
	// your code goes here
	return 0;
}