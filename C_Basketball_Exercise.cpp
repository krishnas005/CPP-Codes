#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector<int> h1(n), h2(n);
    for (int i=0; i<n; i++) cin >> h1[i];
    for (int i=0; i<n; i++) cin >> h2[i];
    vector<vector<int>> dp(2, vector<int>(n, 0));
    dp[0][0] = h1[0];
    dp[1][0] = h2[0];
    for (int i=1; i<n; ++i) {
        dp[0][i] = max(dp[0][i-1], dp[1][i-1] + h1[i]);
        dp[1][i] = max(dp[1][i-1], dp[0][i-1] + h2[i]);
    }
    cout << max(dp[0][n-1], dp[1][n-1]) << endl;
    return 0;
}