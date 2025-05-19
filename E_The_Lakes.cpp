#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<vector<int>> dirs = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

int solve(int i, int j, int n, int m, vector<vector<int>>& arr) {
    if(i < 0 || i >= n || j < 0 || j >= m || arr[i][j] == 0) return 0;
    int ans = arr[i][j];
    arr[i][j] = 0;
    for(auto& dir: dirs) {
        int _i = dir[0] + i;
        int _j = dir[1] + j;
        ans += solve(_i, _j, n, m, arr);
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int> (m));
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                int a;
                cin >> a;
                arr[i][j] = a;
            }
        }
        int ans = 0;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if(arr[i][j] != 0) {
                    ans = max(ans, solve(i, j, n, m, arr));
                }
            }   
        } 
        cout << ans << endl;
    }
    return 0;
}