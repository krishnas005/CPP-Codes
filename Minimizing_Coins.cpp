#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int curr, vector<int>& arr, int n, vector<int>& dp) {
    if(curr == 0) return 0;
    if(curr < 0) return INT_MAX;
    if(dp[curr] != -1) return dp[curr];
    int ans = INT_MAX;
    for(int i=0; i<n; ++i) {
        ans = min(ans, 1 + solve(curr-arr[i], arr, n, dp));
    }
    return dp[curr] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    vector<int> dp(x+1, -1);
    int ans = solve(x, arr, n, dp);
    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}