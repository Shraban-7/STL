#include<stdio.h>
int main()
{
    double p1(x1,y1),p2(x2,y2),Distance;
    scanf("%lb%lb%lb%lb%lb%lb",&p1,&p2,&x1,&y2,&x2,&y2);
    Distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%lb",Distance);
}
