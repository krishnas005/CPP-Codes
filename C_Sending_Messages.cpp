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
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int prev = 0;
        for(int i=0; i<n; ++i) {
            int val = arr[i] - prev;
            f -= min(a * val, b);
            prev = arr[i];
        }
        if(f > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}