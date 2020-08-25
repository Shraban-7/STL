#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    double b,c;
    getline(cin,name);
    cin>>b>>c;
    cout<<fixed;
    cout<<"TOTAL = R$ "<<setprecision(2)<<(b+(c*.15))<<endl;
    return 0;
}
