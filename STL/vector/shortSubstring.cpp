#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    ll t;
    cin>>t;
    while (t--)
    {
        string b;
        cin>>b;
        string a= b.substr(0,2);
        for(int i=3;i<b.size();i+=2)
        {
            a+=b[i];
        }
        cout<<a<<endl;
    }
    
    return 0;
}