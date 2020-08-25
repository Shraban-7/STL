#include<stdio.h>
int main()
{
    float R1,R2,V,V1,V2;
    int a,b,c,d;
    scanf("%d%d%f",&a,&b,&R1);
    printf("\n");
    scanf("%d%d%f",&c,&d,&R2);
    V1=b*R1;
    V2=d*R2;
    V=V1+V2;
    printf("VALOR A PAGAR: R$ %.2f\n",V);
}
