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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int k=0; k<=n; ++k) {
            if((k == 0 || arr[k-1] < k) && (k == n || arr[k] > k)) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}