#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for(int i=0; i<n; ++i) cin >> arr[i];
        string toFind = "vika";
        int ind = 0;
        for(int i=0; i<m; ++i) {
            bool check = false;
            for(int j=0; j<n; ++j) {
                if(arr[j][i] == toFind[ind]) {
                    check = true;
                }
            }
            if(check) {
                ++ind;
                if(ind == 4) break;
            }
        }
        if(ind == 4) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}