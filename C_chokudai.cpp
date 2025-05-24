#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int solve(int i, int j, int n1, int n2, string& s, string& t, vector<vector<int>>& dp) {
    if(i == n1) return 1;
    if(j == n2) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == t[j]) {
        return dp[i][j] = ((solve(i+1, j+1, n1, n2, s, t, dp) % MOD + solve(i, j+1, n1, n2, s, t, dp) % MOD)) % MOD;
    } else return dp[i][j] = solve(i, j+1, n1, n2, s, t, dp) % MOD;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s = "chokudai";
    string t;
    cin >> t;
    int n1 = s.size();
    int n2 = t.size();
    vector<vector<int>> dp(n1+1, vector<int> (n2+1, -1));
    int ans = solve(0, 0, n1, n2, s, t, dp);
    cout << ans << endl;
    return 0;
}