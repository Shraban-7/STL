#include<iostream>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        long long int a,b,s;
        cin>>a>>b;
        s=(a+b)/3;
        s=min(s,min(a,b));
        cout<<s<<endl;
    }
    return 0;
}
