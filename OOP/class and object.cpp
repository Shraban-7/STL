#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length,width;
    Rectangle()
    {
        cout<<"Hi"<<endl;
    }

};
int main()
{
    Rectangle book,khata,a,b;
    int area=0;
    book.length=2;
    book.width=1;
    area=book.length*book.width;
    return 0;
}
