#include<stdio.h>
int main()
{
    int n,i,m;
    for(m=1; m<=3; m++)
    {

        for(n=1; n<=3; n=n+1)
        {

            for(i=1; i<=3; i=i+1)
            {

                printf("%d,%d,%d\n",m,n,i);




            }
        }
    }
}
