#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    float c,sal;
    cin>>a>>b>>c;
    cout<<fixed;
    cout<<"NUMBER = "<<a<<endl<<"SALARY = U$ "<<setprecision(2)<<(b*c)<<endl;
    return 0;
}
