#include<iostream>
using namespace std;
class Rectangle
{
 public:
     int a,b,area;
     Rectangle()
     {
     cout<<"NON PARAMETER"<<endl;
     }
     Rectangle(int a,int b)
     {
         int area=a*b;
         cout<<area<<endl;
     }
};
int main()
{
 Rectangle monitor(5,6),keywoard;
 return 0;
}

