#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    char name[]="Shrabon";
    char mame[10];
    int len = strlen(name);
    cout<<"lenth of string: "<<len;
    cout<<endl;
    strrev(name);
    cout<<"name: "<<name;

    getch();
}
