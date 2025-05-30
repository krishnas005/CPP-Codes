#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> events;
    int ans = 1;
    while(n--) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(begin(events), end(events));
    int curr = 0;
    for(auto& e: events) {
        curr += e.second;
        if(curr > 1) ans = max(ans, curr);
    }
    cout << ans << endl;
    return 0;
}