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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vector<int> b(n);
        vector<int> ans(n);
        for(int i=0; i<n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i=0; i<n; ++i) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i=0; i<n; ++i) {
            ans[a[i].second] = b[i];
        }
        for(auto i: ans) cout << i << " ";
        cout << endl;
    }
    return 0;
}