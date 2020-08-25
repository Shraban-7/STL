#include<iostream>
using namespace std;
int main()
{
char array[3][4];
char i,j;
while(1)
{
for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)
        cin>>array[i][j];
}
for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)

 cout<<" "<<array[i][j];
  cout<<endl;
}}

}
