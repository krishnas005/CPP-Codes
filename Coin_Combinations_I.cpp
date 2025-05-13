#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int solve(int currSum, vector<int>& arr, vector<int>& dp) {
    if(currSum == 0) return 1;
    if(currSum < 0) return 0;
    int ans = 0;
    if(dp[currSum] != -1) return dp[currSum];
    for(int& it: arr) {
        if(currSum - it >= 0) {
            ans = (ans + solve(currSum - it, arr, dp)) % MOD;
        }
    }
    return dp[currSum] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    vector<int> dp(2000000, -1);
    int ans = solve(x, arr, dp);
    cout << ans << endl;
    return 0;
}