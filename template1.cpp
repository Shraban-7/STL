#include<iostream>
using namespace std;
template <class X> void swapargs(X &a,X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=10,j=20;
    cout<<"original i,j:"<<i<<""<<j<<endl;
    swapargs(i,j);
    cout<<"swapped i,j:"<<i<<""<<j<<endl;

    return 0;
}
