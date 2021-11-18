#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int,10> myArray;
    for (int i = 0; i < 10; i++)
    {
        myArray.at(i)=i+1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<' '<<myArray.at(i);
    }
    return 0;
}