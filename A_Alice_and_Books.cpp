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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxx = 0;
        for(int i=0; i<n-1; ++i) {
            maxx = max(maxx, a[i]);
        }
        cout << maxx + a[n-1] << endl;
    }
    return 0;
}