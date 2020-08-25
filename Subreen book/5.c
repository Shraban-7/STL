#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,temp;
    printf("Enter a&b:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    temp=a;
    a=b;
    b=c;
    c=a;
    a=d;
    d=temp;
    printf("After swap a&b:%d %d %d %d",a,b,c,d);
    getch();
}
