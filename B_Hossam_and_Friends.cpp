#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n+1, 0);
        for (int i=0; i<m; i++) {
            int a, b;
            cin >> a >> b;
            if (a > b) swap(a, b);
            arr[b] = max(arr[b], a);
        }
        int ans = 0;
        int maxx = 0;
        for (int i=1; i<=n; i++) {
            maxx = max(maxx, arr[i]);
            ans += (i-maxx);
        }
        cout << ans << endl;
    }
}
