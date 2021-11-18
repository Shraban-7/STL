#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(int x){
    if(x<=1) return false;
    for (int i = 2; i*i <= x; i++)
    {
        if (x%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main() 
{
    int t,count=0;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(isPrime(n)==true){
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
        // int n;
        // cin>>n;
        // for(int i=0;i<n;i++)
        // {
        //     if (isPrime(i)==true)
        //     {
        //         count++;
        //     }
            
        // }
        // cout<<count<<endl;
    }
    
    return 0;
}