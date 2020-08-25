#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tarm=0,s=0;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        tarm-=a;
        tarm+=b;
        if(tarm>s)
            s=tarm;

    }
    cout<<s<<endl;
    return 0;
}
