#include<stdio.h>
int main()
{
    double pi=3.14159;
    int *p;
    p=&pi;
    printf("value of pi:%lf\n",pi);
    printf("value of pi:%lf\n",*p);
}
