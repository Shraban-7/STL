#include<bits/stdc++.h>
int b_Search(int *A[],int n,int data)
{
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==*A[mid])
        {
            return mid;
        }
        else if(data>*A[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}
using namespace std;
int main()
{
    int arr[]={14,23,45,28,67,56,70};
    int b,d=67;
    cout<< b_Search(arr,b,d)<<endl;

}
