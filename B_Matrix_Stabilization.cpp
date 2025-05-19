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
        vector<vector<int>> arr(n, vector<int> (m));
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                int a;
                cin >> a;
                arr[i][j] = a;
            }
        }
        for(int i=0; i<m; ++i) {
            int maxx = 0;
            for(int j=0; j<n; ++j) {
                maxx = 0;
                if(i+1 < m) maxx = max(maxx, arr[j][i+1]);
                if(i-1 >= 0) maxx = max(maxx, arr[j][i-1]);
                if(j+1 < n) maxx = max(maxx, arr[j+1][i]);
                if(j-1 >= 0) maxx = max(maxx, arr[j-1][i]);
                if(arr[j][i] > maxx) arr[j][i] = maxx;
            }
        }
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        } 
    }
    return 0;
}