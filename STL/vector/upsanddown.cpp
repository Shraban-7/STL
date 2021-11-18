#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int start = 0, end = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                cout << arr[end--] << ' ';
            }
            else
            {
                cout << arr[start++] << ' ';
            }
        }
    }

    return 0;
}