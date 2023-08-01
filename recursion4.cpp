#include <iostream>
using namespace std;

int output(int a, int b)
{
    // Base case
    if (a == 0 && b == 0)
    {
        //cout << "Enter correct values" << endl;
        return 1;
    }
    else if (a == 0 && !(b == 0))
    {
        return 0;
    }
    else if (b == 0 && !(a == 0))
    {
        return 1;
    }

    // Recursive fn
    return a * output(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << output(a, b) << endl;

    return 0;
}