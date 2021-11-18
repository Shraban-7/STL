#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, count = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j < n-1; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}