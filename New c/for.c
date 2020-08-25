#include<stdio.h>
int main()
{
    for(int a=0;a<10;a++)
    {
        if(a==5){continue;}
        printf("The value of a is: %d\n",a+1);
    }
    return 0;
}
