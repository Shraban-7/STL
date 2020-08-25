#include<iostream>
using namespace std;
#define SIZE 10
class stack
{
    char stck[SIZE];
    int tos;
public:
    stack();
    void push(char ch);
    char pop();
};
stack::stack()
{
    cout<<"Constructing a stack"<<endl;
    tos=0;
}
void stack::push(char ch)
{
    if(tos==SIZE)
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    stck[tos]=ch;
    tos++;
}
char stack::pop()
{
    if(tos==0)
    {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack s1,s2;
    int i;
    s1.push('s');
    s1.push('h');
    s1.push('r');
    s2=s1;
    for(i=0; i<3; i++)
        cout<<"pop s1:"<<s1.pop()<<endl;
    for(i=0; i<3; i++)
        cout<<"pop s2:"<<s2.pop()<<endl;
    return 0;
}
