#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k,sum=0;
        cin>>n>>k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        for (int j = 0; j <= k; j++)
        {
            sum+=a[j];
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}