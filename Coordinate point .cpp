#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float  x,y;
    cin>>x>>y;
    if(x==0.0)
    {
        if(y==0.0)
            cout<<"Origem"<<endl;
        else
            cout<<"Exio Y"<<endl;
    }
    else if(y==0.0)
    {
        if(x==0.0)
            cout<<"Origem"<<endl;
        else
            cout<<"Exio X"<<endl;
    }
    else if (x>0.0&&y>0.0)
        cout<<"Q1"<endl;
    else if (x<0.0&&y>0.0)
        cout<<"Q2"<endl;
    else if (x<0.0&&y<0.0)
        cout<<"Q3"<endl;
    else if (x>0.0&&y<0.0)
        cout<<"Q4"<endl;
    return 0;
}
