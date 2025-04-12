#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, int n, int w, vector<pair<int, int>>& arr, vector<vector<int>>& dp) {
    if(idx == n) return 0;
    if(dp[idx][w] != -1) return dp[idx][w];
    int not_pick = solve(idx+1, n, w, arr, dp);
    int pick     = INT_MIN;
    if(w - arr[idx].first >= 0) {
        pick = solve(idx+1, n, w-arr[idx].first, arr, dp) + arr[idx].second;
    }
    return dp[idx][w] = max(pick, not_pick);
}

int32_t main() {
    int n;
    cin >> n;
    int w;
    cin >> w;
    vector<pair<int, int>> arr(n);
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        arr[i] = {a, b};
    }
    vector<vector<int>> dp(n, vector<int> (w+1, -1));
    int ans = solve(0, n, w, arr, dp);
    cout << ans << endl;
    return 0;
}