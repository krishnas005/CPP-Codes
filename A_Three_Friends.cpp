#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int a, int b, int c) {
    return (abs(a-b) + abs(a-c) + abs(b-c));
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = solve(a, b, c);
		for(int aa = -1; aa <= 1; ++aa) {
			for(int bb = -1; bb <= 1; ++bb) {
				for(int cc = -1; cc <= 1; ++cc) {
					int _a = a + aa;
					int _b = b + bb;
					int _c = c + cc;
					ans = min(ans, solve(_a, _b, _c));
				}
			}
		}
		cout << ans << endl;

    }
    return 0;
}