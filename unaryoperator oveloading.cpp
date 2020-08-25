#include<bits/stdc++.h>
using namespace std;
class Number{
int x,y;
public:
    Number(){x=0,y=0;}
    Number(int a,int b){x=a,y=b;}
    void get(int &a,int &b){a=x,b=y;}
    void set(int a,int b){x=a,y=b;}
    void print(){cout<<x<<" "<<y<<endl;}

    Number operator ++();
};

Number Number::operator++()
{
    Number tmp;
    x++,y++;
    tmp.x=x;
    tmp.y=y;
    return tmp;
}

int main()
{
    Number n1(4,5),n2(5,6);
    cout<<"before n1: ";n1.print();
    ++n1;
    cout<<"after  n1: ";n1.print();

    return 0;
}
