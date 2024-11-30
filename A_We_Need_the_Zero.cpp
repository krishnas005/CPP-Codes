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
        for(int i=0; i<n; ++i) cin >> a[i];
        int totalXor = 0;
        for(int i=0; i<n; ++i) totalXor ^= a[i];
        if(totalXor == 0) {
            cout << 0 << endl;
            continue;
        }
        if (n%2 == 1) {
            cout << totalXor << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
