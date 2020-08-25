#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        if(n%2==0)
        {
            n/=2;
            n-=1;
            cout<<n<<endl;
        }

        else if(n<3)
        {
            cout<<0<<endl;
        }

        else
        {
           n-=1;
           n/=2;
           cout<<n<<endl;
        }

    }
    return 0;
}
