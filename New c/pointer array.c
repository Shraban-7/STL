#include<stdio.h>
int main()
{
    int mark[4];
    int *ptr;
    ptr=&mark[0];
    for(int i=0; i<4; i++)
    {
        scanf("%d",ptr);
        ptr++;
//        printf("%d\n",mark[i]);
    }
    for(int i=0; i<4; i++)
    {
        printf("%d\n",mark[i]);
    }
    return 0;
}
