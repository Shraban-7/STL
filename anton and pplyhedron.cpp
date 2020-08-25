#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        if(a=="Tetrahedron")
        {
            x=4;
//            cout<<x<<endl;
        }
        else if(a=="Cube")
        {
            x=6;
//            cout<<x<<endl;
        }
        else if(a=="Octahedron")
        {
            x=8;
        }
        else if(a=="Dodecahedron")
        {
            x=12;
        }
        else if(a=="Icosahedron")
        {
            x=20;
        }
        sum+=x;

    }
    cout<<sum<<endl;
    return 0;
}
