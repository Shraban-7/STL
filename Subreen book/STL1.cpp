#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a=5,b=6;
    // cout<<"before:"<<"a:"<<a<<"  "<<"b:"<<b<<endl;
    // swap(a,b);
    // cout<<"after:"<<"a:"<<a<<"  "<<"b:"<<b<< endl;
    int arr[]={5,6,2,8,3};
    // int x = max_element(arr, arr+5 )- arr;
    //  cout<<arr[x]<<endl;
    cout<<"before sort:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+5);
    cout<<"after sort:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}