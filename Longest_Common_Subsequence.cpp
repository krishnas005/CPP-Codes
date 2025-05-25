#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int i, int j, int n, int m, vector<int>& a, vector<int>& b, vector<vector<int>>& dp) {
    if(i == n || j == m) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(a[i] == b[j]) {
        return dp[i][j] = 1 + solve(i+1, j+1, n, m, a, b, dp);
    }
    else {
        return dp[i][j] = max(solve(i+1, j, n, m, a, b, dp), solve(i, j+1, n, m, a, b, dp));
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int& it: a) cin >> it;
    for(int& it: b) cin >> it;
    vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
    int len = solve(0, 0, n, m, a, b, dp);
    vector<int> ans;
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            ans.push_back(a[i]);
            ++i; ++j;
        } else if(dp[i+1][j] >= dp[i][j+1]) {
            ++i;
        } else ++j;
    }
    cout << len << endl;
    for(int& it: ans) cout << it << " ";
    return 0;
}