#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, l;
    cin >> n >> l;
    vector<int> arr(n-1);
    for(int& it: arr) cin >> it;
    int ans = 0;
    if(l % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    unordered_map<int, int> mp;
    vector<int> a(n, 0);
    for(int i=0; i<n-1; ++i) {
        a[i+1] = (a[i] + arr[i]) % l;
    }
    for(int& it: a) mp[it]++;
    for(auto& it: mp) {
        auto [x, y] = it;
        int x1 = (x + l/3) % l;
        int x2 = (x + 2 * (l/3)) % l;
        if(mp.find(x1) != mp.end() && mp.find(x2) != mp.end()) {
            ans += y * mp[x1] * mp[x2];
        }
    }
    ans /= 3;
    cout << ans << endl;
    return 0;
}