#include<stdio.h>
int main()
{
    int a,b,value;
    char sign;
    printf("Enter 2 int num =");
    scanf("%d%d%c",&a,&b,&sign);
    value=a+b;
    sign='+';

    printf("%d%c%d=%d\n",a,sign,b,value);
    value=a-b;
    sign='-';

    printf("%d%c%d=%d\n",a,sign,b,value);
    value=a*b;
    sign='*';

    printf("%d%c%d=%d\n",a,sign,b,value);
    value=a/b;
    sign='/';

    printf("%d%c%d=%d\n",a,sign,b,value);

}
