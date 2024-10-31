#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int sum = 0, ans = 0;
        vector<pair<int, int>> a(n);
        for (auto &it : a) cin >> it.first;
        for (auto &it : a) {
            cin >> it.second;
            it.first = it.first - it.second;
            sum += it.second;
        }
        sort(a.begin(), a.end());
        ans = sum;
        sum += a[0].first;
        for (int i=1; i<n; ++i) {
            sum += a[i].first;
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
