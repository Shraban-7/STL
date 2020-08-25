#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
#define SIZE 255
class strtype
{
    char *p;
    int len;
public:
    strtype();
    ~strtype();
    void in(char *ptr);
    void show();
};
strtype::strtype()
{
    p=(char *) malloc(SIZE);
    if(!p)
    {
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    *p='\0';
    len=0;
}
strtype::~strtype()
{
    cout<<"Freeing p"<<endl;
    free(p);
}
void strtype::in(char *ptr)
{
    if(strlen(p)>=SIZE)
    {
        cout<<"String too big"<<endl;
        return;
    }
    strcpy(p,ptr);
    len=strlen(p);
}
void strtype::show()
{
    cout<<p<<"- length:"<<len<<endl;
}
int main()
{
    strtype s1,s2;
    s1.in("This is a test.");
    s2.in("I like c++.");
    s1.show();
    s2.show();
    return 0;
}
