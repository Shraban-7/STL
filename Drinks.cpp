#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   long long int n,p,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        s+=p;
    }
    cout<<fixed;
    cout<<setprecision(12)<<double(s)/double(n)<<endl;
    return 0;
}
