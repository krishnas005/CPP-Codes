#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;

int solve(int idx, bool tight1, bool tight2, string s1, string s2, vector<vector<vector<int>>>& dp) {
    if(idx == s1.size()) return 0;
    if(dp[idx][tight1][tight2] != -1) return dp[idx][tight1][tight2];
    int low = tight1 ? s1[idx] - '0' : 0;
    int high = tight2 ? s2[idx] - '0' : 9;
    int ans = LLONG_MAX;
    for(int d = low; d <= high; ++d) {
        int newTight1 = tight1 && (d == low);
        int newTight2 = tight2 && (d == high);
        int f1 = (d == s1[idx] - '0') ? 1 : 0;
        int f2 = (d == s2[idx] - '0') ? 1 : 0;
        int cost = f1 + f2 + solve(idx + 1, newTight1, newTight2, s1, s2, dp);
        ans = min(ans, cost);
    }
    return dp[idx][tight1][tight2] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int l, r;
        cin >> l >> r;
        string s1 = to_string(l);
        string s2 = to_string(r);
        int n = s1.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(2, -1)));
        int ans = solve(0, true, true, s1, s2, dp);
        cout << ans << endl;
    }
    return 0;
}