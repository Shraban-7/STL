#include<stdio.h>
int main()
{
    int N,m,s,h;
    scanf("%d",&N);
    h=N/365;
    m=(N-(h*365))/30;
    s=(N)-((h*365)+(m*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",h,m,s);
    return 0;
}
