#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,x=0,y=0,z=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(i<=i+1)
        {
            cout<<"-1"<<endl;
        }
        else{
        x+=a;
        y+=b;
        z+=c;}

    }
    cout<<x;
    return 0;
}
