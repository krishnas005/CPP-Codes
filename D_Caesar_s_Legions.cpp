#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e8;

int dp[101][101][2][11];

int solve(int f, int h, int last, int cnt, int k1, int k2) {
    if(f == 0 && h == 0) return 1;
    int ans = 0;
    if(dp[f][h][last][cnt] != -1) return dp[f][h][last][cnt];
    if(f > 0 && (last != 0 || cnt < k1)) {
        ans = (ans + solve(f-1, h, 0, (last == 0 ? cnt + 1 : 1), k1, k2)) % MOD;
    }
    if(h > 0 && (last != 1 || cnt < k2)) {
        ans = (ans + solve(f, h-1, 1, (last == 1 ? cnt + 1 : 1), k1, k2)) % MOD;
    }
    return dp[f][h][last][cnt] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, sizeof(dp));
    int ans1 = solve(n1-1, n2, 0, 1, k1, k2);
    int ans2 = solve(n1, n2-1, 1, 1, k1, k2);
    cout << (ans1 + ans2) % MOD;
    return 0;
}