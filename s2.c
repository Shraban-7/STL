#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("%d",s);
    printf("\n");
    if(a<b)
    {
        printf("%d",b-a);
    }
    else
    {
        printf("%d",a-b);
    }
}
