#include <bits/stdc++.h>
using namespace std;
#define int long long
#define minn -1e9
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
        int ans = 0;
        for(int i=0; i<n-1; ++i) {
            ans = max(ans, arr[n-1]-arr[i]);
        }
        for(int i=1; i<n; ++i) {
            ans = max(ans, arr[i]-arr[0]);
        }
        for(int i=0; i<n-1; ++i) {
            ans = max(ans, arr[i]-arr[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}