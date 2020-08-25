#include<iostream>
using namespace std;
class Dog
{
    public:
    string color,nationality;
    Dog()//Non-parameterized Constructor
    {
        cout<<"yes, it is working"<<endl;
    }
    Dog(int s)//parameterized
    {
        cout<<s<<endl;
    }
    ~Dog()//destructor
    {
        cout<<"I am dead"<<endl;
    }


    void message()
    {
        cout<<"This is a dog"<<endl;
    }

};
int main()
{
    Dog deshikukur(100),bideshi,a,b,c,d;
    //deshikukur.message();
    //a.message();
    a.message();

    return 0;
}
