#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
     string a = "Shrabon";
     int i,b,c=2,d=3;
     char ch;
      b =sizeof("shrabon");
     cout<<a<<endl;
     cout<<b<<endl;
     cout<<"Enter keys ,x to stop.\n";
     do
     {
         cout<<":";
         cin>>ch;
     }while(ch!='x');
     cin>>i;
     cout<<i<<endl;
     cout<<min(c,d)<<endl;
    return 0;
}
