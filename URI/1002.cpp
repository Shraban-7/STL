#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{

    #define n 3.14159
    double R,A;
    cin>>R;
    A=n*R*R;
    cout<<fixed;
    cout<<"A="<<setprecision(4)<<A<<endl;

    return 0;
}
