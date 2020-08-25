#include<iostream>
using namespace std;
void date(char *date);
void date(int month,int day,int year);
int main()
{
    date("4/8/20");
    date(4,8,20);
    return 0;
}
void date(char *date)
{
    cout<<"Date:"<<date<<endl;
}
void date(int month,int day,int year)
{
    cout<<"Date:"<<month<<"/"<<day<<"/"<<year<<endl;
}
