#include<stdio.h>
int main()
{
    int N,m,s,h;
    scanf("%d",&N);
    m=N/60;
    s=N%60;
    h=m/60;
    m=m%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
