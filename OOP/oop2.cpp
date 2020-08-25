#include<bits/stdc++.h>
using namespace std;

class ractangle
{
public:
    int heigth;
    int width;
    int area(int h,int w)
    {
        return h*w;
    }

};

int main()
{
    ractangle a;
    cout<<a.area(6,5);
    return 0;
}
