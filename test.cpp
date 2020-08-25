#include<iostream>
using namespace std;
void myFunc(int n)
{
    if(n>0)
    {
        cout<<n;
        myFunc(n-1);
    }
}
int main()
{
    int x=3;
    myFunc(x);
    return 0;
}
