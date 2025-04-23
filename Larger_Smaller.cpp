#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define minn LLONG_MAX
#define maxx LLONG_MIN

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int minnn = minn;
        int maxxx = maxx;
        vector<int> arr(n);
        for(int& it: arr) cin >> it;
        for(int i=0; i<n; ++i) {
            minnn = min(minnn, arr[i]);
            maxxx = max(maxxx, arr[i]);
        }
        int ans = (maxxx - minnn - 1);
        cout << max(ans, 0LL) << endl;
    }
    return 0;
}