#include <stdio.h>
int main()
{
   int i, n,j,m, p = 0;
   scanf("%d",&m);
   for(j=1;j<=m;j++){
   scanf("%d", &n);
   //for(int k=1;k<=m;k++)
   for(i=1; i<=n; i++)
   {
      if(n%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("%d eh primo\n ",n);
   }
   else
   {
      printf("%d nao eh primo\n",n);
   }
   }
   return 0;
}
