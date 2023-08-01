#include <iostream>
using namespace std;
int main()
{
    int no;
    cin >> no;
    int lines[no][6];
    int countr = 0;
    for (int m = 0; m < no; m++)
    {
        int x1, y1, x2, y2, x, y;
        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;
        x = (2 * x2 + x1) / 3;
        y = (2 * y2 + y1) / 3;
        lines[m][0] = x1;
        lines[m][1] = y1;
        lines[m][2] = x2;
        lines[m][3] = y2;
        lines[m][4] = x;
        lines[m][5] = y;
    }
    for (int m = no - 1; m >= 0; m--)
    {
        for (int p = m - 1; p >= 0; p--)
        {
            if (lines[m][4] == lines[p][4] && lines[m][5] == lines[p][5])
            {
                cout << lines[m][0] << endl;
                cout << lines[m][1] << endl;
                cout << lines[m][2] << endl;
                cout << lines[m][3] << endl;
                cout << lines[p][0] << endl;
                cout << lines[p][1] << endl;
                cout << lines[p][2] << endl;
                cout << lines[p][3] << endl;
                cout << lines[m][4] << endl;
                cout << lines[m][5] << endl;
                countr++;
            }
        }
    }
    if (countr == 0)
    {
        cout << "nil";
    }
}
