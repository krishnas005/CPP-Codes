#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for (int i=1; i<=n; ++i) {
            cin >> arr[i];
        }
        vector<int> dp(n+1, 1);
        int ans = 1;
        for (int i=1; i<=n; ++i) {
            for (int j=2*i; j<=n; j+=i) {
                if (arr[j] > arr[i]) {
                    dp[j] = max(dp[j], dp[i]+1);
                }
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
