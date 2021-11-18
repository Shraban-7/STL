#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int find=0;
        for (int i = 0; i < n-1; i++)
        {
            if (s[n-1]==s[i])
            {
                find=1;
                break;
            }
            
        }
        if (find)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
        
    }
    
    return 0;
}   