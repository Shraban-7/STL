#include<bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    int mark;
public:
    void set()
    {
        cin>>roll>>mark;
    }
    void print()
    {
        cout<<roll<<"  "<<mark<<endl;
    }
};

class Result : private Student
{
   public:
       void all(){set();print();}
};

int main()
{
    Result ob;
    ob.all();
}
