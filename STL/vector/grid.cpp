#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll r, c, ans;
    cin >> r >> c;
    if (r & 1)
        ans = ((r - 1) / 2) * 10;
    else
        ans = ((r - 1) / 2) * 10 + 1;
    ans = ans + (2 * (c - 1));
    cout << ans << endl;
    return 0;
}