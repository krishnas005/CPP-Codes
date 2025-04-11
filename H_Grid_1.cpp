#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7; 

int solve(vector<vector<char>>& grid, int x, int y, int n1, int n2, vector<vector<int>>& dp) {
    if(x < 0 || x >= n1 || y < 0 || y >= n2 || grid[x][y] == '#') return 0;
    if(x == n1-1 && y == n2-1) return 1;
    if(dp[x][y] != -1) return dp[x][y];
    return dp[x][y] = (solve(grid, x+1, y, n1, n2, dp) % MOD + solve(grid, x, y+1, n1, n2, dp) % MOD) % MOD;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n1, n2;
    cin >> n1 >> n2;
    vector<vector<char>> grid(n1, vector<char> (n2));
    for(int i=0; i<n1; ++i) {
        for(int j=0; j<n2; ++j) {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> dp(n1, vector<int> (n2, -1));
    int ans = solve(grid, 0, 0, n1, n2, dp);
    cout << ans << endl;
    return 0;
}