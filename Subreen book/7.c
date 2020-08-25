#include<stdio.h>
#include<conio.h>
main()
{
    int n,a,r=0;

    printf("Enter any number that you wanna revers :");
    scanf("%d",&n);
    while(n>=1)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    printf("Revers that number is:%d\n",r);
    getch();
}
