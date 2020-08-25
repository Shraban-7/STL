#include<iostream>
using namespace std;
class Chair
{
public:
    int length=50;//instance variable
    string color="Black";//member variable
    Chair(string color,int length)
    {
        this->color=color;
        this->length=length;
        //cout<<color<<length;
    }
    void display()
    {
        cout<<color<<length;
    }
};

int main()
{
    Chair rfl("blue",100);
    rfl.display();
    return 0;
}
