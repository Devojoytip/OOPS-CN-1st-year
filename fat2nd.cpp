#include <iostream>
using namespace std;

class output
{
public:
    void get();
    void print();
    void select();
};

class train
{
private:
    int train;
    int ac, sleep, seat, choice;
    int x;
    int x1, x2, x3;

public:
    friend void output::get();
    friend void output::print();
    friend void output::select();
};
void output::get()
{
    train t;
    cin >> t.train;
    cin >> t.ac >> t.sleep >> t.seat >> t.choice;
}
void output::print()
{
    train t;
    cout << t.train;
};

void output::select()
{
    train t;
    switch (t.choice)
    {
    case 1:
        cin >> t.x;
        if (t.x == 1)
        {
            cin >> t.x1;
            if (t.x1 >> t.ac)
            {
                cout << "Booking seats exceeds";
            }
        }
        else if (t.x == 2)
        {
            cin >> t.x2;
            if (t.x2 >> t.sleep)
            {
                cout << "Booking seats exceeds";
            }
        }
        else
        {
            cin >> t.x3;
            if (t.x3 >> t.seat)
            {
                cout << "Booking seats exceeds";
            }
        }

        break;

    default:
        break;
    }
}

int main()
{
    output t;
    t.get();
    t.print();
    return 0;
}