#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int& it: arr) cin >> it;
    sort(arr.rbegin(), arr.rend());
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for(int i=1; i<n; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    // 1, 2, 3, 5, 5
    while(q--) {
        int ans = 0;
        int x, y;
        cin >> x >> y;
        ans = prefix[x-1];
        ans -= x == y ? 0 : prefix[x-y-1];
        cout << ans << endl;
    }
    return 0;
}