#include<bits/stdc++.h>
using namespace std;

int seacrch(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
}

int main()
{
  int arr[]={1,5,8,9,13};
  cout<<seacrch(arr,5,9)<<endl;
  return 0;
}
