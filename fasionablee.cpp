#include<iostream>
using namespace std;
int main()
{
    long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>3&&n%4==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
