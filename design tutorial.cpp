#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,a=1,b=1;
    cin>>n;
    if(n%3==0&&n%2==0)
    {
        a=n/3;
        b=n-a;
        cout<<a<<" "<<b<<endl;
    }
     else if(n%3==0&&n%2!=0)
     {
         a=n/3+1;
         b=n-a;
         cout<<a<<" "<<b<<endl;
     }
     else if (n%2==0&&n%3!=0)
     {
         a=n/2;
         b=n-a;
         cout<<a<<" "<<b<<endl;
     }
     else
     {
         while(n-a-b)
         {
             a*=4;
             b=n-a;
             if(b%3==0)
             {
                 cout<<a<<" "<<b<<endl;
             }

         }

     }
    return 0;
}
