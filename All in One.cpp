///from different source


string big_sum(string s)
{
    reverse(s.begin(),s.end());
    string st="9999";
    if(s.size()<st.size())
    {
        swap(s,st);
    }
    string an;
    int co=0;
    for (int i=0; i<st.size(); i++)
    {
        int we=s[i]-'0'+st[i]-'0'+ co;
        an+=we%10 + '0';
        co= we/10;
    }
    for (int i=st.size(); i<s.size(); i++)
    {
        int we=s[i]-'0'+ co;
        an+=we%10 + '0';
        co= we/10;
    }
    if(co>0)
    {
        an+=co+'0';
    }
    reverse(an.begin(),an.end());
    return an;
}



string big_multiply(string s)
{
    reverse(s.begin(), s.end());
    int co= 0;
    string st = "";
    for (int i = 0; i<s.size(); i++)
    {
        int digit=s[i] - '0';
        int we=digit * 9999 + co;
        st+=we % 10 + '0';
        co=we / 10;
    }
    while (co>0)
    {
        st+=co % 10 + '0';
        co/=10;
    }
    reverse(st.begin(), st.end());
    return st;
}


long long power(int base, int exp)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}


bool deco(pair <int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}


long long power(long long x, long long y)
{
    long long val = 1;

    while (y > 0)
    {
        if (y % 2 != 0)
            val = val * x;
        y = y / 2;
        x = x * x;
    }
    return val;
}


bool chk(int a)
{
    if(a==2 || a==3 || a==5) return true;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

int power (int n, int k, int m)
{
    int ans = 1;
    n = (n + m) % m;
    while (k)
    {
       if(k&1) ans=1LL*ans*n%m;
       n=1LL*n*n%m;
       k>>=1;
    }
    return ans;
}


ll bigmod(ll base,ll power)
{
   ll res=1;
   ll p=base%mod;
   while(power)
   {
      if(power%2)
      {
         res=((res%mod)+(p%mod))%mod;
      }
      power/=2;
      p=((p%mod)*(p%mod))%mod;
   }
   return res;
}


ll sqrtt(ll a)
{
   ll x=sqrt(a)+2;
   while(x*x>a) x--;
   return x;
}

