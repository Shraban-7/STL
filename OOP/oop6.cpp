//new & delete

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr=new int (5);
    cout<<*ptr<<endl;
    *ptr=7;
    cout<<*ptr<<endl;
    delete(ptr);
    return 0;
}
