#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> dp;

int helper(int idx, int n, string& s, int m, int k) {
    // Base cases
    if(idx >= n) return 0;
    if(dp[idx] != -1) return dp[idx];
    if(s[idx] == 'C') return INT_MAX;
    
    // If we're in water, must swim to next position
    if(s[idx] == 'W') {
        return dp[idx] = 1 + helper(idx + 1, n, s, m, k);
    }
    
    // If on log, try all possible jumps
    int jump = INT_MAX;
    for(int j = 1; j <= m; j++) {
        jump = min(jump, helper(idx + j, n, s, m, k));
    }
    return dp[idx] = jump;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        s = "L" + s; 
        n++;
        
        dp.assign(200010, -1);
        int swims = helper(0, n, s, m, k);
        
        cout << (swims <= k ? "YES" : "NO") << endl;
    }
    return 0;
}