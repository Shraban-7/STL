#include<iostream>
using namespace std;
class A
{
    int a,b;
public:
    void set(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<a<<"   "<<b<<endl;
    }
};
class B
{
    int a,b;
public:
    void set(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<a<<"   "<<b<<endl;
    }
};
int main()
{
    A o1;
    B o2;
    o1.set(10,4);
    o2.set(20,2);
    o1.show();
    o2.show();
    return 0;
}
