#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, int cond, vector<vector<int>>& pos, vector<int>& arr, vector<vector<int>>& dp) {
    if(idx == arr.size()) return 0;
    if(dp[idx][cond] != -1) return dp[idx][cond];
    int ans = cond + solve(idx + 1, 1, pos, arr, dp);
    int it = upper_bound(pos[arr[idx]].begin(), pos[arr[idx]].end(), idx) - pos[arr[idx]].begin();
    if(it != pos[arr[idx]].size()) {
        ans = min(ans,solve(pos[arr[idx]][it],0,pos,arr,dp)); 
    }
    return dp[idx][cond] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int& x: a) cin >> x;
        vector<vector<int>>pos(n+1);
        for(int i=0; i<n; ++i) {
            pos[a[i]].push_back(i);
        }
        vector<vector<int>> dp(n+1, vector<int>(2,-1));
        cout << n - solve(0, 1, pos, a, dp) << endl;
    }
    return 0;
}