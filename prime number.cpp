#include<iostream>
using namespace std;
int main()
{
    int i,n,i1=2,n1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
       cin>>n1;
        for(i1=2; i1<=(n1-1); i1++)
        {
            if(n1%i1==0)
            {
                cout<<n<<" nao eh primo"<<endl;
                break;
            }
        }
        if(i1==n1)
        {
            cout<<n1<<" eh primo"<<endl;

        }
    }
    return 0;
}
