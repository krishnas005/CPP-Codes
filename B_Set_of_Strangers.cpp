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
        vector<vector<int>> arr(n, vector<int>(m));
        vector<bool> isAdjacent(n*m+1, false);
        set<int> st;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> arr[i][j];
                st.insert(arr[i][j]);
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int curr = arr[i][j];
                if((j+1 < m && arr[i][j+1] == curr) || (i+1 < n && arr[i+1][j] == curr)) {
                    isAdjacent[curr] = true;
                }
            }
        }
        int total = 0;
        int maxx = 0;
        for(auto& it: st) {
            int curr = isAdjacent[it] ? 2 : 1;
            total += curr;
            maxx = max(maxx, curr);
        }
        cout << (total - maxx) << endl;
    }
    return 0;
}