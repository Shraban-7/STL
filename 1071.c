#include<stdio.h>
int main()
{
    int x,y,i,n,temp,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y){temp=y;x=y;x=temp;}
    if(x%2==0){x++;
    n=x;}
    else
        n = x+2;
    for(i=n;i<y;i+=2)
    {
        sum+=i;
    }
    printf("%d/n",sum);
    return 0;
}