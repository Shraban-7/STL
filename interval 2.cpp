#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>=10&&arr[i]<=20)
        {
            cout<<count<<"in"<<endl;
            count++;
        }
        else
        {
            cout<<count<<"out"<<endl;
            count++;
        }
    }

    return 0;
}
