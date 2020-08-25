#include<stdio.h>

void printArray(int ptr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\n",ptr[i]);
    }

}

int main()
{
    int arr[]= {5,4,3,2,1,6,9};
    printArray(arr,7);
    return 0;
}
