#include<iostream>
using namespace std;
template <class type1,class type2>
void myfunc(type1 x,type2 y)
{
    cout<<x<<""<<endl;
}
int main()
{
    myfunc(10,"Hi");
    myfunc(0.23,10L);
    return 0;
}
