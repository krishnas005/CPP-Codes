#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int curr, int a, int b, int c, vector<int>& dp) {
    if(curr == 0) return 0;
    if(dp[curr] != -1) return dp[curr];
    int ans = INT_MIN;
    if(curr - a >= 0) ans = max(ans, 1 + solve(curr-a, a, b, c, dp));
    if(curr - b >= 0) ans = max(ans, 1 + solve(curr-b, a, b, c, dp));
    if(curr - c >= 0) ans = max(ans, 1 + solve(curr-c, a, b, c, dp));
    return dp[curr] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n+1, -1);
    cout << solve(n, a, b, c, dp) << endl;
    return 0;
}