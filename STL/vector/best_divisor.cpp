#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 6 == 0 || n % 12 == 0)
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}