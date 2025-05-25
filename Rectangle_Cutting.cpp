#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int dp[501][501];

// int solve(int a, int b) {
//     if(a == b) return 0;
//     int ans = INT_MAX;
//     if(dp[a][b] != -1) return dp[a][b];
//     // vertical cuts
//     for(int i=1; i<a; ++i) {
//         ans = min(ans, solve(i, b) + solve(a-i, b) + 1);
//     } 
//     // horizontal cuts
//     for(int j=1; j<b; ++j) {
//         ans = min(ans, solve(a, j) + solve(a, b-j) + 1);
//     }
//     return dp[a][b] = ans;
// }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    // solve(a, b);
    for(int i=1; i<=a; ++i) {
        for(int j=1; j<=b; ++j) {
            if(i == j) dp[i][j] = 0;
            else {
                dp[i][j] = INT_MAX;
                // vertical cuts
                for(int k=1; k<i; ++k) {
                    dp[i][j] = min(dp[i][j], (dp[k][j] + dp[i-k][j] + 1));
                }
                // horizontal curs
                for(int k=1; k<j; ++k) {
                    dp[i][j] = min(dp[i][j], (dp[i][k] + dp[i][j-k] + 1));
                }
            }
        }
    }
    
    cout << dp[a][b] << endl;
    return 0;
}