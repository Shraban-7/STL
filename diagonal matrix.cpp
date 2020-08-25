#include<iostream>
using namespace std;
class Matrix
{

public:
    int A[10];
    int n;
};

void set(class Matrix *m,int i,int j,int x)
{
    if(i==j)
        m->A[i-1]=x;
}

int get(class Matrix m,int i ,int j)
{
    if(i==j)
        return m.A[i-1];
    else
        return 0;
}

void Display(class Matrix m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
                cout<<m.A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    Matrix m;
    m.n=4;

    set(&m,1,1,5);
    set(&m,2,2,8);
    set(&m,3,3,9);
    set(&m,4,4,12);

    Display(m);

    return 0;
}
