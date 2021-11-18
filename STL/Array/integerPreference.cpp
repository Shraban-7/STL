#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;
    if ((A<=B)&&(B>=C)&&(D>=C))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}