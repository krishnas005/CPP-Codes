#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int solve(int i, int j, int n, vector<vector<char>>& grid, vector<vector<int>>& dp) {
    if (i == n - 1 && j == n - 1) return (grid[i][j] == '*') ? 0 : 1;
    if(i < 0 || j < 0 || i >= n || j >= n || grid[i][j] == '*') return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int right = solve(i, j+1, n, grid, dp);
    int down  = solve(i+1, j, n, grid, dp);
    return dp[i][j] = (right + down) % MOD;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char> (n));
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
    cout << solve(0, 0, n, grid, dp);
    return 0;
}