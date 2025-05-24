#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int dp[105][3];

int solve(int curr, int last, int n, vector<int>& arr) {
    if(curr == n) return 0;
    if(dp[curr][last] != -1) return dp[curr][last];
    int ans = INT_MAX;
    int today = arr[curr];
    ans = min(ans, 1+solve(curr+1, 0, n, arr));
    if((today == 1 || today == 3) && last != 1) {
        ans = min(ans, solve(curr+1, 1, n, arr));
    }
    if((today == 2 || today == 3) && last != 2) {
        ans = min(ans, solve(curr+1, 2, n, arr));
    }
    return dp[curr][last] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0, n, arr);
    return 0;
}