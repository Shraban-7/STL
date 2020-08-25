#include<stdio.h>
int main()
{
//    int a,b;
//    printf("Enter your value of a: ");
//    scanf("%d",&a);
//    printf("Enter your value of b: ");
//    scanf("%d",&b);
//    printf("%d\n",a+b);
char c=37;
char *ptr=&c;
printf("%u\n",ptr);
ptr++;
printf("%u",ptr);

    return 0;
}
