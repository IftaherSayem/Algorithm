void prime_factorization(int n)///O(logn) for worse o(sqrtn)
{
   vector<int>ar;
   for (int i=2;i*i<=n;i++)
   {
      if(n%i==0)
      {
         while(n%i==0)
         {
            n/=i;
            ar.push_back(i);
         }
      }
   }
   if(n>1) ar.push_back(n);
   for (int i=0;i<ar.size()-1;i++)
   {
      cout << ar[i] << "*" ;
   }
   cout << ar[ar.size()-1] << el;
}
