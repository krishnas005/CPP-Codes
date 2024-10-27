#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    unordered_map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0)
        {
            mp[v[i]]++;
        }
    }
    for (auto i : mp) {
        if (i.second == 2) ++ans;
        if (i.second > 2) {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}