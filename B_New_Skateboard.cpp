#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int i, int n, string& s, vector<int>& dp) {
    if(dp[i] != -1) return dp[i];
    if(i == n) return dp[i] = 0;
    int ans = 0;
    if((s[i] - '0') % 4 == 0) ans++;
    if(i > 0 && (stoi(s.substr(i-1, 2)) % 4 == 0)) ans += i;
    return dp[i] = ans + solve(i+1, n, s, dp);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> dp(n+1, -1);
    cout << solve(0, n, s, dp);
    return 0;
}