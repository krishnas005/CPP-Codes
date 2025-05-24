#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int dp[2][1000001];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i].first;
    }
    for(int i=0; i<n; ++i) {
        cin >> arr[i].second;
    }
    for(int i=0; i<=x; ++i) {
        dp[0][i] = 0;
    }
    for(int i=1; i<=n; ++i) {
        for(int j=0; j<=x; ++j) {
            dp[i%2][j] = dp[(i-1)%2][j];
            if(j-arr[i-1].first >= 0) {
                dp[i%2][j] = max(dp[i%2][j], arr[i-1].second + dp[(i-1)%2][j-arr[i-1].first]);
            } 
        }
    }
    cout << dp[n%2][x];
    return 0;
}