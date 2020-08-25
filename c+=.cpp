#include<bits/stdc++.h>
using namespace std;
int main() {


	int T; cin >> T;
	while (T--) {
		int64_t A, B, N; cin >> A >> B >> N;
		int ans = 0;
		while (max(A,B) <= N) {
			if (A > B) swap(A, B);
			A += B;
			ans++;
		}
		cout << ans << endl;
	}

	return 0;
}
