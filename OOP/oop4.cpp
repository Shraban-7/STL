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

};
int ractangle::area()
{
    return heigth*width;
}

void ractangle::set(int h,int w)
{
    heigth=h;
    width=w;
}

int main()
{
    ractangle a;
    a.set(5,6);
    cout<<a.area();
    return 0;
}
