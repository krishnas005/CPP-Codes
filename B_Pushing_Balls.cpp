#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for(int i=0; i<n; ++i) cin >> grid[i];
        bool flag = true;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if(grid[i][j] == '1') {
                    bool row_check = true;
                    for(int k=0; k<j; ++k) {
                        if(grid[i][k] != '1') {
                            row_check = false;
                            break;
                        }
                    }
                    if(row_check) continue;
                    bool col_check = true;
                    for(int k=0; k<i; ++k) {
                        if(grid[k][j] != '1') {
                            col_check = false;
                            break;
                        }
                    }
                    if(col_check) continue;
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}