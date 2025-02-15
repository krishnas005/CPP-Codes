#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int a, b, c , d;
		cin >> a >> b >> c >> d;
		if(b <= d && c <= a+d-b) {
			cout << (d-b) + (a+d-b-c) << endl;
		} else {
            cout << -1 << endl;
		}
    }
    return 0;
}