#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    ll T;
    cin>>T;
    for (ll i=1;i<=T;i++)
    {
        ll N,K,S,rs,bc;
        cin>>N>>K>>S;
        rs = N+K;
        bc = (K-1)+(K-S)+(N-S+1);
        // if (rs<bc)
        // {
        //     cout<<"Case #"<<i<<": "<<rs<<endl;
        // }
        // else
        // {
        //     cout << "Case #" << i << ": " << bc << endl;
        // }

        cout<<"Case #"<<i<<": "<<min(rs,bc)<<endl;
        
        
    }
    return 0;
}