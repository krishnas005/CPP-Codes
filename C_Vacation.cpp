#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, int lastIdx, vector<vector<int>>& points, vector<vector<int>>& dp) {
    if(idx == 0) {
        int maxi = 0;
        for(int i=0; i<3; i++) {
            if(i != lastIdx) {
                maxi = max(maxi, points[idx][i]);
            }
        }
        return maxi;
    }
    if(dp[idx][lastIdx+1] != -1) return dp[idx][lastIdx+1];
    int maxi = 0;
    for(int i=0; i<3; ++i) {
        if(i != lastIdx) {
            int curr = points[idx][i] + solve(idx-1, i, points, dp);
            maxi = max(maxi, curr);
        }
    }
    return dp[idx][lastIdx+1] = maxi;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    vector<vector<int>> points(N, vector<int>(3));
    for(int i=0; i<N; i++) {
        for(int j=0; j<3; j++) {
            cin >> points[i][j];
        }
    }
    vector<vector<int>> dp(N, vector<int>(4, -1));
    cout << solve(N-1, -1, points, dp) << endl;
    return 0;
}