#include<iostream>
using namespace std;
int main()
{
    int array[6]={5,6,15,18,7,9};
    int X=7;
    int count=0;
    for( int i=0;i<6;i++)
    {
        count++;
        if(array[i]==X)
        {
            cout<<count<<" "<<"The number is hare :"<<array[i]<<endl;
            break;
        }

    }
    return 0;
}
