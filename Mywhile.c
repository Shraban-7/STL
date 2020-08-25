#include<stdio.h>
int main()
{
    int x,y;
    while(&x,&y)
    {
        scanf("%d%d",&x,&y);
        printf("%d+%d=%d",x,y,x+y);
    }
    return 0;
}
