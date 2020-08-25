// Array of object

#include<iostream>
using namespace std;

class ractangle
{
     int heigth;
     int width;
 public:
    void set(int h,int w) {heigth=h,width=w;}
    int area(){ return heigth*width;}
};

int main()
{
    ractangle obj[5];
    obj[0].set(1,2);
    obj[1].set(2,2);
    obj[2].set(3,2);
    obj[3].set(4,2);
    obj[4].set(5,2);
    for(int i=0;i<5;i++)
        cout<<obj[i].area()<<endl;
    return 0;
}
