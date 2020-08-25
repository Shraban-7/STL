#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,u;
    cin>>s>>t;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            u+="1";
        }
        else
        {
            u+="0";
        }
    }
    cout<<u<<endl;
    return 0;
}
