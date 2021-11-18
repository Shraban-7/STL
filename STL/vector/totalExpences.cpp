#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        double q,p,mod;
        cin>>q>>p;
        if (q>1000)
        {
           mod=p/10;
           cout<<fixed;
           cout<<setprecision(6)<<q*(p-mod)<<"\n"; 
        }
        else
        {
            cout<<fixed;
            cout<<setprecision(6)<<q*p<<"\n";
        }
        
    }
    
    return 0;
}