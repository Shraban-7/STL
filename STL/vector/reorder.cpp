#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, sum = 0;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m -= a[i];
        }
        if (m == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}