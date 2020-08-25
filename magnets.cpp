#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos=0,neg=0;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a==10)
        {

           if(a==01)
           {
               break;
           }
           pos++;

        }
        else
        {
            neg++;
        }
    }
    int ans=pos;
    cout<<ans<<endl;
    return 0;
}
