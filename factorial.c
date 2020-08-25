#include<stdio.h>
int main()
{
    int M,N,i,j;
    long long int fact1,fact2;

    while(1)
    {
        scanf("%d%d",&M,&N);
        fact1=1;
        fact2=1;

        for(i=M; i>0; i--)
        {
            fact1*=i;
        }
        for(j=N; j>0; j--)
        {
            fact2*=j;

    }
    printf("%lld\n",(fact1+fact2));
    }
    return 0;
}
