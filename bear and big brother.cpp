#include<iostream>
using namespace std;
int main()
{
    int a,b,count=1;
    cin>>a>>b;
    while(1)
    {
        a*=3;
        b*=2;
        if(b>=a)
            count++;
        else
            break;
    }
    cout<<count<<endl;
    return 0;
}
