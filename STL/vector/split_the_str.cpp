#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int left[26]={0};
        int right[26]={0};
        int len=s.length();
        for (int i = 0; i < len/2; i++)
        {
            int index=s[i]-'a';
            left[index]++;
        }
        for (int i = (len+1)/2; i < len; i++)
        {
            int index=s[i]-'a';
            right[index]++;
        }
        int ca=0;
        for (int i = 0; i < 26; i++)
        {
           if(left[i]!=right[i])
                ca=1;
        }
        
        if (ca==0)
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