#include<iostream>
using namespace std;
class Pen
{
    public:
    int length;
    string name;
    void showData(int a, string b)
    {
        length=a;
                name=b;
        cout<<length<<name<<endl;

    }
};

int main()
{
    Pen matador;
    matador.showData(10,"Matador Gripper Gel");
    Pen linc(matador);
    linc.showData(5,"Linc");

    return 0;

}
