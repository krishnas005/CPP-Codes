#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxx INT_MAX
#define minn INT_MIN

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        string sA, sB, sC;
        cin >> sA >> sB >> sC;
        int n1 = sA.size(), n2 = sB.size(), n3 = sC.size();
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, maxx));
        dp[0][0] = 0;
        for(int i=0; i<=n1; ++i) {
            for (int j=0; j<=n2; ++j) {
                int k = i + j; 
                if (k >= sC.size()) continue;
                if (i < n1) {
                    int cost = (sA[i] != sC[k]) ? 1 : 0;
                    dp[i+1][j] = min(dp[i + 1][j], dp[i][j] + cost);
                }
                if (j < n2) {
                    int cost = (sB[j] != sC[k]) ? 1 : 0;
                    dp[i][j+1] = min(dp[i][j + 1], dp[i][j] + cost);
                }
            }
        }
        cout << dp[n1][n2] << endl;
    }
    return 0;
}