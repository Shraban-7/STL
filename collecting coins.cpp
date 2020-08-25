#include<bits/stdc++.h>
using namespace std;

int coin(int &a,int &b,int &c)
{
    int maximum,minimum,dif=0;
    maximum=max(a,b,c);
    minimum=min(a,b,c);
    dif=maximum-minimum;
    return dif;

}

int main()
{
    int x,y,z,n;
    cin>>x>>y>>z;
    cout<<coin(x,y,z)<<endl;
}
