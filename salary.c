#include<stdio.h>
int main()
{
    double A,B,SALARY,C,TOTAL;
    char name[30];
    scanf("%s",name);
    scanf("%lf%lf",&A,&B);
    SALARY = B*0.15;
    TOTAL = A+SALARY;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
