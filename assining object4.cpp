#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class A
{
    char *p;
    int len;
public:
    A(char *ptr);
    ~A();
    void show();
};
A::A(char *ptr)
{
    len=strlen(ptr);
    p=(char *) malloc(len+1);
    if(!p)
    {
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p,ptr);
}
A::~A()
{
    cout<<"Freeing p"<<endl;
    free(p);
}
void A::show()
{
    cout<<p<<"- length:"<<len<<endl;
}
int main()
{
    A s1("this is a test"),s2("I like c++");
    s1.show();
    s2.show();
    s2=s1;
    s1.show();
    s2.show();
    return 0;
}
