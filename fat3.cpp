#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int array[N][6];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int x1, y1, x2, y2, x, y;
        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;
        x = (2 * x2 + x1) / 3;
        y = (2 * y2 + y1) / 3;
        array[i][0] = x1;
        array[i][1] = y1;
        array[i][2] = x2;
        array[i][3] = y2;
        array[i][4] = x;
        array[i][5] = y;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (array[i][4] == array[j][4] && array[i][5] == array[j][5])
            {
                cout << array[i][0] << endl;
                cout << array[i][1] << endl;
                cout << array[i][2] << endl;
                cout << array[i][3] << endl;
                cout << array[j][0] << endl;
                cout << array[j][1] << endl;
                cout << array[j][2] << endl;
                cout << array[j][3] << endl;
                cout << array[i][4] << endl;
                cout << array[i][5] << endl;
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << "nil";
    }
}