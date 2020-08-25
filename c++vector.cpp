#include <bits/stdc++.h>
using namespace std;

void print(vector<int> data)
{
    cout << "Total Elements: " << data.size() << "\n";
    for (int datam:data)
        cout << datam << " ";
    cout << "\n\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> data ({3, 2, 1, 6, 4, 2});
    int ln = data.size();
    for (int i=0; i<ln; ++i){
        cout << data[i] << " ";
    }

    return 0;
}
