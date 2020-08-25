#include<stdio.h>
int main()
{
    int n,i,j;
    for(n=1; n<=3; n++)
    {
        for(i=1; i<=3; i++)
        {
            if(i!=n)
            {
                for(j=1; j<=3; j++)
                {
                    if(j!=i&&j!=n)
                        printf("%d , %d, %d\n",n,i,j);
                }
            }
        }
    }
}
