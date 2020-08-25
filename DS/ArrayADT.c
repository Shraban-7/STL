#include<stdio.h>
#include<stdlib.h>

struct MyArray
{
    int A[20];
    int size;
    int length;

};

void display(struct MyArray arr)
{
    printf("\nElements are\n");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d\n",arr.A[i]);
    }
}

void Insert(struct MyArray *arr,int index,int x)
{
    if(index>=0&&index<=arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }

}

int Delete(struct MyArray *arr,int index)
{
    int x=0;
    if(index>=0&&index<arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }

}

int LinearSearch(struct MyArray *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            return i;
        }
    }
     return -1;
}

int main()
{
    struct MyArray arr={{45,28,9,54,67,13},10,6};
//    int insert_n;
//    printf("Enter index you want to insert element : ");
//    scanf("%d",&insert_n);
//    Insert(&arr,insert_n,10);
//    display(arr);
///    Delete
//    printf("%d\n",Delete(&arr,2));
//    display(arr);
///  Linear Search
     printf("%d",LinearSearch(&arr,9));
     display(arr);
    return 0;
}
