#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string S, x = "hello";
    cin >> S;
    int j = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (j >= 5)
            break;
        if (S[i] == x[j])
        {
            j++;
        }
    }
    cout<<j<<endl;
    
    // if (j >= 5)
    // {
    //     cout << "YES\n";
    // }
    // else
    // {
    //     cout << "NO\n";
    // }

    return 0;
}