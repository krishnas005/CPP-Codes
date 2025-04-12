#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, int val, vector<pair<int, int>>& arr, int n, vector<vector<int>>& dp) {
    if(val == 0) return 0;
    if(idx == n) return INT_MAX;
    if(dp[idx][val] != -1) return dp[idx][val];
    int not_pick = solve(idx+1, val, arr, n, dp);
    int pick = INT_MAX;
    if(val - arr[idx].second >= 0) {
        pick = solve(idx+1, val-arr[idx].second, arr, n, dp) + arr[idx].first;
    }
    return dp[idx][val] = min(pick, not_pick);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
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
    int maxVal = 0;
    for (auto& p : arr) {
        maxVal += p.second; 
    }
    int ans = 0;
    vector<vector<int>> dp(n+1, vector<int>(maxVal+1, -1));
    for(int val=maxVal; val>=0; --val) {
        if(solve(0, val, arr, n, dp) <= w) {
            ans = val;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}