#include<bits/stdc++.h>
using namespace std;

class ractangle
{
private:
    int heigth;
    int width;
public:
    void set(int h,int w);

    int area();
    ractangle(int h,int w);
    ~ractangle();
};
int ractangle::area()
{
    return heigth*width;
}

ractangle::ractangle(int h,int w)
{
    heigth=h;
    width=w;
    cout<<"constructor"<<endl;
}

ractangle::~ractangle()
{
  cout<<"destructor"<<endl;
}

int main()
{
    ractangle a(5,6);
    cout<<a.area()<<endl;
    return 0;
}
