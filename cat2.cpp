void search(string one, string two)
{
    int counter = 0;
    for (int i = 0; i < one.size(); i++)
    {
        if (one[i] == two[counter])
        {
            counter++;
        }
        else if (counter > 0)
        {
            break;
        }
        else
        {
            ;
        }
    }
    if (counter == two.size())
    {
        cout << 1;
    }
    else
    {
        cout << -1 << endl;
    }
}
void searchpos(string one, string two, int pos)
{
    int counter = 0;
    for (int i = pos - 1; i < one.size(); i++)
    {
        if (one[i] == two[counter])
        {
            counter++;
        }
        else if (counter > 0)
        {
            break;
        }
        else
        {
            ;
        }
    }
    if (counter == two.size())
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}
