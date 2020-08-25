#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,d=0,n;
    cin>>n;
    char str[n];
    for(int i =0;i<n;i++)
    {
        cin>>str[i];
        if(str[i]==65)
        {
            a++;
        }
        else if(str[i]==68)
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if (d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a==d)
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
