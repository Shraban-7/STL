#include<stdio.h>
int main()
{
    int X;
    float Y,amount;
    scanf("%d%f",&X,&Y);
    if(X%5==0)
    {
        amount=Y-(X+0.5);
        printf("%.2f\n",amount);
    }
    else
    {
        printf("%.2f\n",Y);
    }
    return 0;
}
