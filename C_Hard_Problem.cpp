#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int r1 = min(a, m);
        int r2 = min(b, m);
        int temp = 2 * m - r1 - r2;
        cout << r1 + r2 + min(c, temp) << endl;
    }
    return 0;
}