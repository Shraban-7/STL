#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    double s;
    cin>>s;
    if(s<=2000)
    cout<<"Isento\n";
    else if (s>=2000.01 && s<=3000)
    {
        cout<<fixed;
        cout<<"R$ "<<setprecision(2)<<(s-2000)*0.08<<endl;
    }
    else if (s>=3000.01 && s<=4500)
    {
        cout<<fixed;
        cout<<"R$ "<<setprecision(2)<<((s-3000)*0.18)+1000*0.08<<endl;
    }
    else if (s>=4500)
    {
        cout<<fixed;
        cout<<"R$ "<<setprecision(2)<<((s-4500)*0.28)+(1500*0.18)+(1000*0.08)<<endl;
    }
    return 0;
}