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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> capacity(n);
        for(int& it: capacity) cin >> it;
        vector<int> power(m);
        for(int& it: power) cin >> it;
        sort(capacity.rbegin(), capacity.rend());
        sort(power.rbegin(), power.rend());
        int ans = 0;
        for(int i=0; i<min(n, m); ++i) {
            ans += min(capacity[i], power[i] * h);
        }
        cout << ans << endl;
    }
    return 0;
}