#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p<=q-2)
        {
            ans++;
        }


        //cout<<p<<q<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
