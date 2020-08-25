#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=(b*b-4*a*c);
    if(x<0)
        cout<<"Impossivel calcular"<<endl;
    else if(a==0)
            cout<<"Impossivel calcular"<<endl;
    else
    {
        y=(-b+sqrt(b*b-4*a*c))/(2*a);
        z=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout<<"R1 = "<<y<<endl<<"R2 = "<<z<<endl;
    }
   return 0;
}
