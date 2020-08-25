#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={1,2,3,4};
    int i,temp;
     if(i>=0)

    {
      for(i=0;i<4;i++)
{


            temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;

        printf(" %d ",arr[i]);
    }}
    getch();
}
