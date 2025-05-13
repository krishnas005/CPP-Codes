#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(int r, int c, int n, int val, vector<vector<int>>& ans) {
    if(r == n || c == n || r < 0 || c < 0 || ans[r][c] != -1) return;
    ans[r][c] = val--;
    while(c+1 < n && ans[r][c+1] == -1) {
        ans[r][++c] = val--;
    }
    while(r+1 < n && ans[r+1][c] == -1) {
        ans[++r][c] = val--;
    }
    while(c > 0 && ans[r][c-1] == -1) {
        ans[r][--c] = val--;
    }
    while(r > 0 && ans[r-1][c] == -1) {
        ans[--r][c] = val--;
    }
    solve(r, c+1, n, val, ans);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<vector<int>> ans(n, vector<int> (n, -1));
        solve(0, 0, n, n*n-1,  ans);
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                cout << ans[i][j] << " ";
            } cout << endl;
        }
    }
    return 0;
}