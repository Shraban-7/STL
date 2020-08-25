#include<stdio.h>
int main()
{
    int a,b,i,j,temp,c=0;
    for(i=0;i<100;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
            break;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(j=a;j<=b;j++)
        {
            printf("%d ",j);
            c+=j;
        }
        printf("Sum=%d\n",c);
        c=0;
    }
    return 0;
}
