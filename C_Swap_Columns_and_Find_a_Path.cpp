#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxx INT_MAXX
#define minn INT_MIN

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(2, vector<int>(n));
        for(int i=0; i<2; ++i) {
            for(int j=0; j<n; ++j) {
                cin >> arr[i][j];
            }
        }
        int summ = 0;
        for(int i=0; i<n; ++i) {
            summ += max(arr[0][i], arr[1][i]);
        }
        int ans = minn;
        for(int i=0; i<n; ++i) {
            ans = max(ans, summ+min(arr[0][i], arr[1][i]));
        }
        cout << ans << endl;
    }

    return 0;
}
