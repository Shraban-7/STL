#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    if(N%2==0)
        N++;

    for(i=0; i<6; i++)
    {
        printf("%d\n",N);
        N+=2;
    }
    return 0;
}
