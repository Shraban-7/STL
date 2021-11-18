#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        string S;
        cin>>S;
        int dig=S[0]-'0'-1;
        int len=S.size();
        // cout<<len<<endl;
        cout<<dig*10+len*(len+1)/2<<endl;
    }
    
    return 0;
}