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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> tools(n);
        int ans = b;
        for(int i=0; i<n; ++i) {
            int j;
            cin >> j;
            ans += min(a-1, j);
        } 
        cout << ans << endl;
    }
    return 0;
}
