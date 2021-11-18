#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a = 0, b = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            for (int j = 0; j < 3; j++)
            {
                if (x == 1)
                {
                    a++;
                }
            }
            if (a>=2)
            {
                b++;
            }
            
        }
        cout << b << endl;
    }

    return 0;
}