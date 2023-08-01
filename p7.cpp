#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[3], y[3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        int temp = 0;
        int h = 0;
        int flag1, flag2;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] >= temp)
            {
                temp = arr[i];
            }
        }
        //cout<<temp<<endl;
        for (int x = 0; x < 3; x++)
        {
            for (int i = 0; i < 3; i++)
            {
                if (arr[i] < temp)
                {
                    y[h] = arr[i];
                    h++;
                }
            }
        }
        if (y[0] > y[1])
        {
            cout << y[0] << endl;
        }
        else
        {
            cout << y[1] << endl;
        }
    }
    // your code goes here
    return 0;
}