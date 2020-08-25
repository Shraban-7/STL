#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0||6<n&&n<=20)
    {
        cout<<"Weird"<<endl;
    }
    else
    {
        cout<<"Not Weird"<<endl;
    }
    return 0;
}
