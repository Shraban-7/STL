#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int g,x;
    cin>>g;
    if (g<38)
    {
        cout<<g<<endl;
    }
    else
    {
        x=(((g/5)+1)*5)-g;
        if (x<3)
        {
            cout << (((g / 5) + 1) * 5) << endl;
        }
        else
        {
            cout<<g<<endl;
        }
        
    }
    
}
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}