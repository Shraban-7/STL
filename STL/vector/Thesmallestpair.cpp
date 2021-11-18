#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0]+a[1]<<"\n";
        
    }
    
    return 0;
}