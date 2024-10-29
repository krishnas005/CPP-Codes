#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i=0; i<k; i++) {
            int a;
            cin >> a;
            pq.push(a);
        }
        int ans = 0;
        while(!pq.empty()) {
            if(pq.size() == 1) break;
            int a = pq.top();
            if(a == 1) ++ans;
            else ans += (a-1) + a;
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}