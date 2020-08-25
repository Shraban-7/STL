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

    bool operator && (Number ob);
};

bool Number::operator&&(Number ob)
{
    return (x&&y)&&(ob.x&&ob.y);
}

int main()
{
    Number n1(4,5),n2(5,6);
    if(n1&&n2)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
