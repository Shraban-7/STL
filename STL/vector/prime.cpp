#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47}; 
    cin >> t;
    while (t--)
    {
        ll n,prod=1,count=0;
        cin >> n;
        for (ll i = 0; i < 15; i++)
        {
            prod *= prime[i];
            if (prod <= n)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}