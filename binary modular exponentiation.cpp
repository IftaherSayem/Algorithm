void binary_modular_exponentiation(int x,int y,int z)///O(log(y))
{
   ll res=1;
   while(y)
   {
      if(y%2==1)
      {
         res=(res*x)%z;
         y--;
      }
      else
      {
         x=(x*x)%z;
         y/=2;
      }
   }
   cout << res << el;
}
