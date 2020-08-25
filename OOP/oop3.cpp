#include<bits/stdc++.h>
using namespace std;

class ractangle
{
public:
    int heigth;
    int width;
    int area();

};
int ractangle::area()
{
    return heigth*width;
}

int main()
{
    ractangle a;
    a.heigth=6;
    a.width=5;
    cout<<a.area();
    return 0;
}
