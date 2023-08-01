#include <iostream>
using namespace std;

class train
{
private:
    int num;
    int ac, sleep, seat, choice;
    int x;
    int x1, x2, x3;

public:
    void get();
    void print();
    void select();
};
void train::get()
{
    cin >> num;
    cin >> ac >>sleep >> seat >> choice;
}


void train::select()
{
    cin>>choice;
    if (choice==1)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> x1;
            if (x1 >> ac)
            {
                cout << "Booking seats exceeds";
            }
        }
        else if (x == 2)
        {
            cin >> x2;
            if (x2 >> sleep)
            {
                cout << "Booking seats exceeds";
            }
        }
        else
        {
            cin >> x3;
            if (x3 >> seat)
            {
                cout << "Booking seats exceeds";
            }
        }
    }
}

int main()
{
    train t;
    t.get();
    t.print();
    return 0;
}