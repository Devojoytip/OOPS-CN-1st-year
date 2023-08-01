void sortDolls(vector<Doll *>&list, int size)
{
    if (isBigger < list.isBigger)
    {
        for (int i = 1; i <= size; ++i)
        {
            Doll *bigDoll = new Doll(i);
            list.push_back(bigDoll);
        }
    }
    int j = 0, k = 0;
    bool swap = true;
    string flag = "";
    while (swap)
    {
        for (int l = 0; l < size - j; l++)
        {
            if (bigDoll[l] > flag)
            {
                flag = bigDoll[l];
                k = l;
            }
        }
        j++;
        bigDoll[k] = bigDoll[size - j];
        bigDoll[size - j] = flag;
        k = 0;
        flag = "";

        for (int l = 0; l < size - j; l++)
        {
            if (bigDoll[l] > bigDoll[l + 1])
                swap = true;
        }
    }
}
