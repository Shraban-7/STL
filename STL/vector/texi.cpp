#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    int t,sum=0;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    if (sum%4!=0)
    {
        cout<<(sum/4)+1<<"\n";
    }
    else
    {
        cout<<sum/4<<"\n";
    }
    
    return 0;
}