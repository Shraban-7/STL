#include<iostream>
using namespace std;
int main()
{
    int T;
  long long int n;
    cin>>T;
    for(  long long int i=1; i<=T; i++)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }

}
