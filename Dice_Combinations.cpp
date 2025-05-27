#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int solve(int curr, vector<int>& dp) {
    if(curr == 0) return 1;
    if(curr < 0) return 0;
    if(dp[curr] != -1) return dp[curr];
    int ans = 0;
    for(int i=1; i<=6; ++i) {
        ans = (ans + solve(curr-i, dp)) % MOD;
    }
    return dp[curr] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=6; ++j) {
            if(i >= j) {
                dp[i] = dp[i] + dp[i-j];
            }
        }
    }
    // cout << solve(n, dp);
    cout << dp[n] << endl;
    return 0;
}