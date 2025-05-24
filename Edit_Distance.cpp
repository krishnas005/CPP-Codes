#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(int i, int j, int n1, int n2, string& s, string& t, vector<vector<int>>& dp) {
    if(i == n1) return (n2-j);
    if(j == n2) return (n1-i);
    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == t[j]) {
        return dp[i][j] = solve(i+1, j+1, n1, n2, s, t, dp);
    }
    else {
        int add     = solve(i, j+1, n1, n2, s, t, dp);
        int replace = solve(i+1, j+1, n1, n2, s, t, dp);
        int deletee = solve(i+1, j, n1, n2, s, t, dp);
        return dp[i][j] = 1 + min({add, replace, deletee});
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int n1 = s.size();
    int n2 = t.size();
    vector<vector<int>> dp(n1+1, vector<int> (n2+1, -1));
    for(int i=0; i<=n1; ++i) dp[i][0] = i;
    for(int j=0; j<=n2; ++j) dp[0][j] = j;
    for(int i=1; i<=n1; ++i) {
        for(int j=1; j<=n2; ++j) {
            if(s[i-1] == t[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
            }
        }
    }
    cout << dp[n1][n2] << endl;
    return 0;
}