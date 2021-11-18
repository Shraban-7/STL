#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mul = 1, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            mul =(mul*a[i])%1234567;
        }

        cout << mul << "\n";
    }

    return 0;
}