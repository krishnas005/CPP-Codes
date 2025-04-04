#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, vector<int>& arr, vector<int>& dp, int k) {
    if(idx == 0) return 0;
    if(dp[idx] != -1) return dp[idx];
    int res = LLONG_MAX;
    for(int j=1; j<=k; ++j) {
        if(idx-j >= 0) {
            res = min(res, solve(idx - j, arr, dp, k) + abs(arr[idx] - arr[idx - j]));
        }
    }
    return dp[idx] = res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int& it : arr) cin >> it;
    vector<int> dp(n, -1);
    cout << solve(n - 1, arr, dp, k) gi << endl;
    return 0;
}