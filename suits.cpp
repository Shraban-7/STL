#include<iostream>
using namespace std;
int main()
{
    long a,b,c,d;
    int e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(b<c&&c<d)
    {
        if(a>d&&d>b&&d>c)
        {


                cout<<(d*e)<<endl;

        }
        else
        {
            if(a>b)
            {
                cout<<(b*f)+((d-b)*e)<<endl;
            }
            else if(a>d)
            {
                cout<<(d*f)<<endl;
            }
            else
            {
                cout<<(b*f)+(a*e)<<endl;
            }
        }
    }
    else if(c<b&&c<d)

    {
        if(a>d&&d>b&&d>c)
        {
                cout<<(d*e)<<endl;
        }
        else
        {
            if(a>c)
            {
                cout<<(c*f)+((d-c)*e)<<endl;
            }
            else if(a>d)
            {
                cout<<(d*f)<<endl;
            }
            else
            {
                cout<<(c*f)+(a*e)<<endl;
            }
        }
    }
    else
    {
        if(a>d&&d>b&&d>c)
        {


                cout<<(d*e)<<endl;

        }
        else
        {
            if(a>d)
            {
                cout<<(d*f)+((d-d)*e)<<endl;
            }
            else  if(a>d)
            {
                cout<<(d*f)<<endl;
            }

            else
            {
                cout<<(d*f)+(a*e)<<endl;
            }
        }
    }
    return 0;
}
