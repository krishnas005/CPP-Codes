#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        int ans = 0;
        int len = 0;
        for(int i=0; i<=n; ++i) {
            int temp = (i < n) ? arr[i] : q + 1;
            if(temp <= q) {
                ++len;
            } else {
                if(len >= k) {
                    ans += ((len - k + 1) * (len - k + 2)) / 2;
                }
                len = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}