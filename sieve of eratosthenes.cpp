vector<int>isit;
bool ar[90000001];
//bool sar[90000001];
void sieve()///O(nloglogn)
{
    int mx=90000000;
    ar[0]=ar[1]=true;
    for (int i=2; i*i<=mx; i++)
    {
        if(!ar[i])
        {
            for (int j=i*i; j<=mx; j+=i)
            {
                ar[j]=true;
            }
        }
    }

    for (int i=2; i<=mx; i++)
    {
        if(!ar[i])
        {
            isit.push_back(i);
        }
    }
}
