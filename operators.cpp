#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,tip,tax,total,x;
    int b,c;
    cin>>a>>b>>c;
    tip=a*(double(b)/100);
    tax=a*(double(c)/100);
    total=a+tip+tax;
    x=round(total);
    cout<<x<<endl;
    return 0;
}
