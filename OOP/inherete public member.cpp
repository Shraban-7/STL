#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int roll;
    int mark;
};

class Result : public Student{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<mark<<"  "<<roll<<endl;}
};

int main()
{
    Result ob;
    ob.set();
    ob.print();
}
