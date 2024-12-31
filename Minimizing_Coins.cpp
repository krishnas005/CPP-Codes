#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int& i : coins) cin >> i;
    const int INF = 1e9; 
    vector<int> dp(x+1, INF);
    dp[0] = 0;
    for(int i=1; i<=x; i++) {
        for(int j=0; j<n; j++) {
            if(i-coins[j] >= 0) {
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }
    if(dp[x] == INF) cout << -1 << endl;
    else cout << dp[x] << endl;
    return 0;
}