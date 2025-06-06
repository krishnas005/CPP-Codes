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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // intersection
        int low  = max(a, c);
        int high = min(b, d);
        if(low > high) {
            cout << 1 << endl;
            continue;
        }
        int ans = high - low;
        if(min(a, c) < low) ++ans;
        if(max(b, d) > high) ++ans;
        cout << ans << endl;
    }
    return 0;
}