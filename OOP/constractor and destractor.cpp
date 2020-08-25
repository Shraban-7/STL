#include<iostream>
using namespace std;
class MEC
{
public:
    string name;
    int establishment;
    MEC()
    {
        cout<<"CSE 2nd Batch"<<endl;
    }
    ~MEC()
    {
        cout<<"Bye Bye CSE"<<endl;
    }
};
int main()
{
    MEC CSE,EEE;
    CSE.name="CSE";
    CSE.establishment=2018;
    EEE.name="EEE";
    EEE.establishment=2010;
    cout<<"My dept name is:"<<CSE.name<<endl;
    cout<<"Establishment:"<<CSE.establishment<<endl;
    cout<<"My dept name is:"<<EEE.name<<endl;
    cout<<"Establishment:"<<EEE.establishment<<endl;

}
