#include<stdio.h>
#include<conio.h>
#define PI 3.14159
double my_func(double a)
{
    double area;
    scanf("%lf",&a);
    area = PI*a*a;
    return area;
}
int main()
{
    double b,x;
    while(1)
    {
        printf("Enter radius:");
        x=my_func(b);
        printf("Area:%lf\n",x);
    }
    getch();
}
