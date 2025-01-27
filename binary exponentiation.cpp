void binary_exponentiation(int x,int y)///O(logY)
{
   ll res=1;
   while(y)
   {
      if(y%2==1)
      {
         res*=x;
         y--;
      }
      else
      {
         x*=x;
         y/=2;
      }
   }
   cout << res << el;
}
