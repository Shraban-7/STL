#include<iostream>
using namespace std;
class Base{

public:

    int a;

    void display()
    {
        cout<<"I am shraban"<<endl;
    }
};

class derived:public Base{

public:

    void show()
    {
        cout<<"It is derived "<<a<<endl;
    }


};

int main()
{
    derived d;

    d.a=100;

    d.display();

    d.show();
}

