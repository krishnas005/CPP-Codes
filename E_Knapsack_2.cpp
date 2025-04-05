#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(int idx, int n, int w, vector<pair<int, int>>& arr, unordered_map<string, int>& mp) {
    if(idx == n) return 0;
    string key = to_string(idx) + "_" + to_string(w);
    if(mp.find(key) != mp.end()) return mp[key];
    int not_pick = solve(idx+1, n, w, arr, mp);
    int pick     = INT_MIN;
    if(w - arr[idx].first >= 0) {
        pick = solve(idx+1, n, w-arr[idx].first, arr, mp) + arr[idx].second;
    }
    return mp[key] = max(pick, not_pick);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int w;
    cin >> w;
    vector<pair<int, int>> arr(n);
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        arr[i] = {a, b};
    }
    unordered_map<string, int> mp;
    int ans = solve(0, n, w, arr, mp);
    cout << ans << endl;
    return 0;
}