#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a[10],b[5],c[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < 5; i++)
    {
        a[i]=b[i];
        a[i+5]=c[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<a[i];
    }
    
    return 0;
}