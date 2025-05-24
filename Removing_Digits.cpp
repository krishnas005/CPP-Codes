#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int curr, vector<int>& dp) {
    if(curr == 0) return 0;
    if(curr < 0) return INT_MAX;
    if(dp[curr] != -1) return dp[curr];
    int ans = INT_MAX;
    string s = to_string(curr);
    for(int i=0; i<s.size(); ++i) {
        int num = s[i] - '0';
        if(num != 0) ans = min(ans, 1 + solve(curr-num, dp));
    }
    return dp[curr] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << solve(n, dp) << endl; 
    return 0;
}