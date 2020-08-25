#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum=0;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==x)
                break;
            sum+=a[i];


        }
//        if(sum%2==0)
//            cout<<"No"<<endl;
//
//        else
//
//            cout<<"Yes"<<endl;

cout<<sum<<endl;
    }
    return 0;
}
