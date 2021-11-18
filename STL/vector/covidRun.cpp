#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int i, flag = 0;
        for (i = 1; i <= n; i++)
        {
            if ((x + (k * i)) % n == y)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}