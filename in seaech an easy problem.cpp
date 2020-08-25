#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        sum+=a;
    }
    if(sum==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
