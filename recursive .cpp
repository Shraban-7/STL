#include<bits/stdc++.h>
using namespace std;
//void func1(int n)
//{
//    if(n>0)
//    {
//        cout<<n<<endl;
//        func1(n-1);
//    }
//}
void func2(int n)
{
    if(n>0)
    {

        func2(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    int x=3;
    func1(x);
    return 0;
}
