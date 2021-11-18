#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    int sum1=0,sum2=0;
    for (int i = 5; i < 1000; i=i+5)
    {
        sum1+=i;
    }
    for (int i = 3; i < 1000; i=i+3)
    {
        sum2+=i;
    }
    cout<<sum1+sum2<<endl;
    return 0;
}