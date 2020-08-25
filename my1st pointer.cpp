#include<iostream>
using namespace std;
int main()
{
    int f1,f2;
    int *p;
     p=&f1;
    *p=10;
     p=&f2;
    *p=20;
    cout<<f1<<endl<<f2;
}
