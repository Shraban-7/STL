#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        double sal;
        cin >> sal;
        if (sal < 1500)
        {
            cout << fixed;
            cout << setprecision(2) << sal + sal << "\n";
        }
        else
        {
            cout << fixed;
            cout << setprecision(2) << (sal + 500) + (sal * 98) / 100 << "\n";
        }
    }

    return 0;
}