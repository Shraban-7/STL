#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int c2=0,c3=0;
        cin>>n;
        while (n % 3 == 0)
            ++c3, n /= 3;
        while (n % 2 == 0)
            ++c2, n /= 2;
        if (n == 1 && c2 <= c3)
            printf("%d\n", c3 + (c3 - c2));
        else
            printf("-1\n");
    }
    return 0;
}
