#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double mod= fmod(x,2);
    if(mod==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }


    return 0;
}
