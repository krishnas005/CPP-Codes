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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> B(m);
        for(int& it: B) cin >> it;
        sort(begin(B), end(B));
        while(q--) {
            int pos;
            cin >> pos;
            // first tchr more than pos
            auto it = upper_bound(begin(B), end(B), pos);
            int left = -1, right = -1;
            int ans = 0;
            // Left Side
            if(it == B.begin()) {
                // no tchr on left
                int first = B[0];
                ans = max(ans, (pos-1) + (first - pos));
            } else {
                // tchr on left L
                left = *(it - 1);
                ans = max(ans, (pos - left + 1) / 2);
            } 
            // Right Side
            if(it == B.end()) {
                // no tchr on right
                int last = B.back();
                ans = max(ans, (n - pos) + (pos - last));
            } else {
                // tchr on right R
                right = *it;
                ans = max(ans, (right - pos + 1) / 2);
            }
            if(left == -1 || right == -1) ans = max(ans, (right-left)/2);
            cout << ans << endl;
        }
    }
    return 0;
}