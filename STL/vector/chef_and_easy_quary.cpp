#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll pen=0;
        ll days=0;
        ll f=false;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pen+=x;
            if (pen<k && !f)
            {
                days=i+1;
                f=true;
            }
            pen=pen-k;
            if (pen<0)
            {
                pen=0;
            }
            
            
        }
        if (!f)
        {
            days=n+1+(pen/k);
        }
        cout<<days<<"\n";
    }
    
    return 0;
}