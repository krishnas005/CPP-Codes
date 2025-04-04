#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, vector<int>& arr, vector<int>& dp) {
    if(idx == 0) return 0;
    if(dp[idx] != -1) return dp[idx];
    int c1 = solve(idx-1, arr, dp) + abs(arr[idx] - arr[idx-1]);
    int c2 = INT_MAX;
    if(idx > 1) {
        c2 = solve(idx-2, arr, dp) + abs(arr[idx] - arr[idx-2]);
    }
    return dp[idx] = min(c1, c2);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    vector<int> dp(n, -1);
    int ans = solve(n-1, arr, dp);
    cout << ans << endl;
    return 0;
}