#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t, count = 0;
    string s, c;
    cin >> t;
    while (t--)
    {
        cin >> s;
        // cout << s << endl;
        if (s != c)
        {
            count++;
            // cout << c << endl;
        }
        c = s;
    }
    cout << count << endl;
    return 0;
}