#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,p=0;
    cin>>n;
    while(n>=p)
    {
        n-=p;
        c++;
        p+=c;
    }
    c--;
    cout<<c<<endl;
}
