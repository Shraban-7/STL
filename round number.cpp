#include<iostream>
using namespace std;
int main()
{
    int t,k,n,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n%10;
        r=n/10;
        cout<<k*10<<" "<<n%10<<endl;
    }
    return 0;
}
