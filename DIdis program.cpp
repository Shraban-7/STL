#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter people age:";
    cin>>x;
    cout<<endl;
    cout<<"Enter luggage weight:";
    cin>>y;
    if(y>=20)
    {
        if(x>=60)
            cout<<"10";
        else if(x<=10)
            cout<<"25";
        else
            cout<<"40";
    }
    else
    {
        if(x>=60)
            cout<<"0";
        else if(x<=10)
            cout<<"5";
        else
            cout<<"30";
    }
    return 0;
}
