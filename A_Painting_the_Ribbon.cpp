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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int maxx = *max_element(arr.begin(), arr.end());
        for (int i = 0; i < m; ++i) {
            char c;
            int l, r;
            cin >> c >> l >> r;

            if (l <= maxx && maxx <= r) {
                if (c == '+') {
                    maxx += 1;
                } else {
                    maxx -= 1;
                }
            }
            cout << maxx;
            if (i != m - 1) {
                cout << " ";
            } else {
                cout << "\n";
            }
        }
    }
    return 0;
}