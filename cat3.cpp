// istream &operator>>(istream &in, product &c)
// {
//     in >> c.name >> c.cost;
//     return in;
// }
// ostream &operator<<(ostream &out, product &c)
// {
//     out<<"\n"<<p.name<<"\n"<<p.cost;
//     return out;
// }
// bool product::operator>(product &c)
// {
//     if (c.cost[(strlen(c.cost) - 1)] == 'D')
// }
// void sort(product *x, int y)
// {
//     for (int i = 0; i < y; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             if (x[i] > x[j])
//             {
//                 swap(c[i], c[j]);
//             }
//         }
//     }
// }

bool product::operator>(product &p)
{
    float a = 12;
    float b = 12;
    return a > b;
}

istream &operator>>(istream &in, product &p)
{
    in >> p.name >> p.cost;
    return in;
}

ostream &operator<<(ostream &out, product &p)
{
    out <<"\n"<< p.name <<"\n"<< p.cost;
    return out;
}

void sort(product c[20], int num)
{
    int i, j;
    char z[40];
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (product c[i].cost)
            {
                /* code */
            }
            
        }
    }
}

int main()
{
    product c[20];
    int i, num;

    cin >> num;
    for (i = 0; i < num; i++)
        cin >> c[i];

    sort(c, num);

    for (i = 0; i < num; i++)
        cout << c[i];
}