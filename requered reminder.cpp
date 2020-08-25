#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        d=(n-5)/x;
        y+=d*x;
        y-=x;
        while(x+y<=n)
            y+=x;
        cout<<y<<endl;
    }
    return 0;
}
