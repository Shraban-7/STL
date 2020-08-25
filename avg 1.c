#include<stdio.h>
void main()
{
    float A,B,S,MEDIA;
    scanf("%f%f",&A,&B);
    S = A+B;
    MEDIA = (A+B)/2;
    if(0<=A&&A<=10)
    {
    if(0<=B&&B<=10)
        printf("MEDIA = %.5f\n",MEDIA);
    }
    return 0;
}
