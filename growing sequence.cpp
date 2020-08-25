#include<iostream>
using namespace std;
int main()
{
    int X;
    while(1)
    {
        cin>>X;
        for(int j=1; j<=X; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        if(X==0)
            break;
    }
    return 0;
}
