#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD = 998244353;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        sort(begin(arr), end(arr));
        int ans = 1;
        bool flag = true;
        for(int i=0; i<n; ++i) {
            int temp = arr[i] - i;
            if(temp <= 0) flag = false;
            if(!flag) break;
            ans = (ans * temp) % MOD;
        }
        if(flag) cout << ans << endl;
        else cout << 0 << endl;
    }
    return 0;
}