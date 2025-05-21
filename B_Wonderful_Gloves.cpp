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
        int n, k;
        cin >> n >> k;
        vector<int> l(n);
        for(int& it: l) cin >> it;
        vector<int> r(n);
        int ans = 0;
        vector<int> arr(n);
        for(int i=0; i<n; ++i) {
            cin >> r[i];
            ans += max(r[i], l[i]);
            arr[i] = min(r[i], l[i]);
        }
        sort(rbegin(arr), rend(arr));
        for(int i=0; i<n; ++i) {
            if(k <= 0) break;
            --k;
            if(k) {
                ans += arr[i];
            } else ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}