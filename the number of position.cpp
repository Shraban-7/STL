#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a<b||a>b)
    {
        if(a>b&&b>0)
        {
            cout<<a<<endl;
        }
        else if(a>b&&b==0)
        {
            cout<<n-a<<endl;
        }
        else if(a<b)
        {
            cout<<n-a<<endl;
        }
        else if(b>a&&a==0)
        {
            cout<<n-b<<endl;
        }
        else if(a>b)
        {
            cout<<n-a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }

    }

    else if (a==b)
    {
        cout<<n-a<<endl;
    }


    return 0;
}
