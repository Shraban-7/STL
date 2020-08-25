#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b!=0)
        {
            n=a/b;
            n+=1;
            b*=n;
            b-=a;
            cout<<b<<endl;
        }
        else if(a%b==0)
        {
            cout<<"0"<<endl;
        }
    }
}
