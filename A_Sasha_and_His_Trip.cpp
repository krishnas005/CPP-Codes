#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, v;
    cin >> n >> v;
    if (n-1 <= v) {
        cout << n-1 << endl;
        return 0;
    }
    int ans = v-1;
    for (int i = 1; i <= n-v; ++i) {
        ans += i;
    }
    cout << ans << endl;
    return 0;
}