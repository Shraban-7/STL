#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,x;
    char sign;

    while(1)
    {

        printf("Enter sign:");
        scanf("%c",&sign);

        if(sign=='+')
        {
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            x=a+b;
            printf("Summation of two number: %d\n",x);
        }
      if(sign=='-')
        {
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            x=a-b;
            printf("Subtraction of two number: %d\n",x);
        }
      if(sign=='*')
        {
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            x=a*b;
            printf("Multiplication of two number: %d",x);
        }
        if(sign=='/')
        {
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            x = a/b;
            printf("Divide of two number: %d",x);
        }



    getch();
    }
}
