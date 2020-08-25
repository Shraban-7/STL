#include<iostream>
using namespace std;
int main()
{
    int n,d,a=0,b=0;
    cin>>n;
    for(int i=1;i<=5;i++)
    {
        if(n%5==0){
        d=n/i;}
        else
        {
            if((n%5)%4==0)
            {
                d=(n/i)+((n%5)/4);
            }
            else if(((n%5)%4)%3==0)
                {
                    d=(n/i)+((n%5)/4)+(((n%5)%4)/3);
                }
                else if((((n%5)%4)%3)%2==0)
                {
                    d=(n/i)+((n%5)/4)+((((n%5)%4)%3)/2);
                }
                else if(((((n%5)%4)%3)%2)%1==0)
                {
                    d=(n/i)+((n%5)/4)+(((((n%5)%4)%3)%2)/1);
                }



        }

    }
    cout<<d<<endl;
    return 0;
}
