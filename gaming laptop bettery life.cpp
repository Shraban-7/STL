#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=50;
    cin>>n;
    while(n--)
    {
        int i;
        cin>>i;

        if(sum>=100)
        {
            sum+=i;
            sum=sum-100;;
            sum=100-sum;
            cout<<sum<<endl;
        }
        else
        {
            sum+=i;
            cout<<sum<<endl;
        }
    }

    return 0;
}
